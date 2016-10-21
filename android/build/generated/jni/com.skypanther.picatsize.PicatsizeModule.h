/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace com {
namespace skypanther {
namespace picatsize {

class PicatsizeModule : public titanium::Proxy
{
public:
	explicit PicatsizeModule(jobject javaObject);

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void getAvailableCameras(const v8::FunctionCallbackInfo<v8::Value>&);
	static void takePicture(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setCameraFlashMode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void openPhotoGallery(const v8::FunctionCallbackInfo<v8::Value>&);
	static void previewImage(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getIsCameraSupported(const v8::FunctionCallbackInfo<v8::Value>&);
	static void saveToPhotoGallery(const v8::FunctionCallbackInfo<v8::Value>&);
	static void takeScreenshot(const v8::FunctionCallbackInfo<v8::Value>&);
	static void vibrate(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getCameraFlashMode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void showCamera(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hideCamera(const v8::FunctionCallbackInfo<v8::Value>&);
	static void switchCamera(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_isCameraSupported(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void getter_cameraFlashMode(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_cameraFlashMode(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);
	static void getter_availableCameras(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);

};

} // picatsize
} // skypanther
} // com
