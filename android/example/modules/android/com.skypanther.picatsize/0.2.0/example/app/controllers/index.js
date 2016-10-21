var pascam = require('com.skypanther.picatsize');
var targetWidth = 1024;
var targetHeight = 800;


function openCameraActivity(e) {

	var overlay = Ti.UI.createView({
	});

	var clickBt = Ti.UI.createButton({
		title: "click me",
		bottom: 10,
		right: 20
	});

	overlay.add(clickBt);
	clickBt.addEventListener('click', function() {
		pascam.takePicture();
	});

	var closeBt = Ti.UI.createButton({
		title: "close me",
		bottom: 10,
		left: 20
	});

	overlay.add(closeBt);
	closeBt.addEventListener('click', function() {
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
	var targetWidth = 1024;
	var targetHeight = 800;

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