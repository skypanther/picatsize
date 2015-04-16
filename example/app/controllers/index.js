function doClick(e) {
	var pascam = require('com.skypanther.picatsize');
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
		},
		error: function (e) {
			Ti.API.info(JSON.stringify(e));
		},
		saveToPhotoGallery: false,
		mediaTypes: [pascam.MEDIA_TYPE_PHOTO],
		targetWidth: 1024,
		targetHeight: 800
	});
}

$.index.open();