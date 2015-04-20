PicAtSize
===========================================

PicAtSize is an Android module that lets you take a "_PIC_&#65279;ture _AT_ a _SIZE_" you specify. By taking a  photo smaller than the camera's native size, you create smaller files which are faster to upload, faster to process (resize, crop, rotate), and which create less memory-related issues. It was the memory issue that inspired this module.

Natively, Android supports the `camera.getParameters.setPictureSize()` method. But Titanium's Ti.Media module does not expose this functionality. This module makes that available for you to use.

A few notes:

* With this module, you must use a camera overlay or you'll get the native camera which has no size-specifying support.
* You will get a photo at the closest, next larger size supported by the device's camera. It may not, and probably won't match the exact size you specify. (Reportedly, some Android devices will not take any photo if you were to specify a size that the camera doesn't support.)

I want to send a huge thanks to @olivier_morandi who helped me get this module working. I was close, but could never have finished it without his help. Thanks!!!




## INSTALL THE MODULE

### Use GitTio

Use GitTio, as it will download, unzip, and install the module for you.

```shell
gittio install com.skypanther.picatsize
```

### Manually

Download the zip from the dist folder, unzip, place in your project's modules folder.

Register in the tiapp.xml:

```xml
<modules>
	<module platform="android">com.skypanther.picatsize</module>
</modules>
```



## USING THE MODULE IN CODE

See the included sample app. You need to create a camera overlay and open the 

```javascript
// instantiate and specify your target size
var pascam = require('com.skypanther.picatsize');
var targetWidth = 1024;
var targetHeight = 800;

// create the necessary overlay
var overlay = Ti.UI.createView();

var clickBt = Ti.UI.createButton({
	title: "Take Photo",
	bottom: 10,
	right: 20
});
overlay.add(clickBt);
clickBt.addEventListener('click', function() {
	pascam.takePicture();
});
var closeBt = Ti.UI.createButton({
	title: "Cancel",
	bottom: 10,
	left: 20
});
overlay.add(closeBt);
closeBt.addEventListener('click', function() {
	pascam.hideCamera();
});

// show the camerapascam.showCamera({
	overlay: overlay, // setting the overlay makes the module start PASCameraActivity
	autohide: false, // autohide must be false for takePicture() to work
	success: function (e) {
		Ti.API.info("bytes: " + e.media.length);
		Ti.API.info("height: " + e.media.height);
		Ti.API.info("width: " + e.media.width);
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

```

# License

Apache License, Version 2.0
