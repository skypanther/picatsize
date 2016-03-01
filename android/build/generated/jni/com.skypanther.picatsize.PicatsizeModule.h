/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
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

	static void bindProxy(v8::Handle<v8::Object> exports);
	static v8::Handle<v8::FunctionTemplate> getProxyTemplate();
	static void dispose();

	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static jclass javaClass;

private:
	// Methods -----------------------------------------------------------
	static v8::Handle<v8::Value> getAvailableCameras(const v8::Arguments&);
	static v8::Handle<v8::Value> takePicture(const v8::Arguments&);
	static v8::Handle<v8::Value> getIsCameraSupported(const v8::Arguments&);
	static v8::Handle<v8::Value> getCameraFlashMode(const v8::Arguments&);
	static v8::Handle<v8::Value> showCamera(const v8::Arguments&);
	static v8::Handle<v8::Value> hideCamera(const v8::Arguments&);
	static v8::Handle<v8::Value> setCameraFlashMode(const v8::Arguments&);
	static v8::Handle<v8::Value> openPhotoGallery(const v8::Arguments&);
	static v8::Handle<v8::Value> previewImage(const v8::Arguments&);
	static v8::Handle<v8::Value> saveToPhotoGallery(const v8::Arguments&);
	static v8::Handle<v8::Value> takeScreenshot(const v8::Arguments&);
	static v8::Handle<v8::Value> vibrate(const v8::Arguments&);
	static v8::Handle<v8::Value> switchCamera(const v8::Arguments&);

	// Dynamic property accessors ----------------------------------------
	static v8::Handle<v8::Value> getter_cameraFlashMode(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static void setter_cameraFlashMode(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_isCameraSupported(v8::Local<v8::String> property, const v8::AccessorInfo& info);
	static v8::Handle<v8::Value> getter_availableCameras(v8::Local<v8::String> property, const v8::AccessorInfo& info);

};

		} // picatsize
		} // skypanther
		} // com
