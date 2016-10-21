var pascam = require('com.skypanther.picatsize');
var targetWidth = 1024;
var targetHeight = 800;

$.index.addEventListener('open', function () {
	if (parseInt(Ti.Platform.version.split(".")[0]) >= 6 && !Ti.Media.hasCameraPermissions()) {
		Ti.Media.requestCameraPermissions(function (e) {
			if (e.success) {
				console.log("Camera permission granted.");
			} else {
				alert("You have denied the app permission to take pictures. Clicking either button will crash the app.\n\nPlease update the permissions in the Settings app or uninstall and try again.");
			}
		});
	}
});

function openCameraActivity(e) {
	if (!Ti.Media.hasCameraPermissions()) {
		alert('oopsie');
		return;
	}
	var overlay = Ti.UI.createView({});

	var clickBt = Ti.UI.createButton({
		title: "click me",
		bottom: 10,
		right: 20
	});

	overlay.add(clickBt);
	clickBt.addEventListener('click', function () {
		pascam.takePicture();
	});

	var closeBt = Ti.UI.createButton({
		title: "close me",
		bottom: 10,
		left: 20
	});

	overlay.add(closeBt);
	closeBt.addEventListener('click', function () {
		pascam.hideCamera();
	});

	pascam.showCamera({
		overlay: overlay, //setting the overlay makes the module start PASCameraActivity
		autohide: false, //according to the docs, autohide must be false for takePicture() to work
		success: function (e) {
			Ti.API.info('Our type was: ' + e.mediaType);
			Ti.API.info("bytes: " + e.media.length);
			Ti.API.info("height: " + e.media.height);
			Ti.API.info("width: " + e.media.width);
			Ti.API.info("apiName: " + e.media.apiName);
			$.img.image = e.media;
			console.log(e);
			pascam.hideCamera();
		},
		error: function (e) {
			Ti.API.info(JSON.stringify(e));
		},
		saveToPhotoGallery: false,
		mediaTypes: [pascam.MEDIA_TYPE_PHOTO],
		targetWidth: targetWidth,
		targetHeight: targetHeight
	});
}


function openNativeCamera(e) {
	if (!Ti.Media.hasCameraPermissions()) {
		alert('oopsie');
		return;
	}
	pascam.showCamera({
		showControls: true,
		autohide: true,
		success: function (e) {
			Ti.API.info('Our type was: ' + e.mediaType);
			Ti.API.info("bytes: " + e.media.length);
			Ti.API.info("height: " + e.media.height);
			Ti.API.info("width: " + e.media.width);
			Ti.API.info("apiName: " + e.media.apiName);
			console.log(e);

			//resize the media blob "manually"

			//scale based on the largest side of the picture (use Math.max() for scaling on the littlest side)
			var scale = Math.min(targetWidth / e.media.width, targetHeight / e.media.height);
			var blob = e.media.imageAsResized(e.media.width * scale, e.media.height * scale);

			Ti.API.info("new size: " + blob.width + "x" + blob.height);
			$.img.image = blob;
			//blob can be saved to a file if needed
		},
		error: function (e) {
			Ti.API.info(JSON.stringify(e));
		},
		saveToPhotoGallery: false,
		mediaTypes: [pascam.MEDIA_TYPE_PHOTO],
		targetWidth: targetWidth,
		targetHeight: targetHeight
	});
}

$.index.open();