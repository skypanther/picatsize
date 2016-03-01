/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2013 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "com.skypanther.picatsize.PicatsizeModule.h"

#include "AndroidUtil.h"
#include "EventEmitter.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "Proxy.h"
#include "ProxyFactory.h"
#include "TypeConverter.h"
#include "V8Util.h"



#include "com.skypanther.picatsize.ExampleProxy.h"

#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "PicatsizeModule"

using namespace v8;

		namespace com {
		namespace skypanther {
		namespace picatsize {


Persistent<FunctionTemplate> PicatsizeModule::proxyTemplate = Persistent<FunctionTemplate>();
jclass PicatsizeModule::javaClass = NULL;

PicatsizeModule::PicatsizeModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void PicatsizeModule::bindProxy(Handle<Object> exports)
{
	if (proxyTemplate.IsEmpty()) {
		getProxyTemplate();
	}

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Picatsize");

	Local<Function> proxyConstructor = proxyTemplate->GetFunction();
	Local<Object> moduleInstance = proxyConstructor->NewInstance();
	exports->Set(nameSymbol, moduleInstance);
}

void PicatsizeModule::dispose()
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Dispose();
		proxyTemplate = Persistent<FunctionTemplate>();
	}

	titanium::KrollModule::dispose();
}

Handle<FunctionTemplate> PicatsizeModule::getProxyTemplate()
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate;
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("com/skypanther/picatsize/PicatsizeModule");
	HandleScope scope;

	// use symbol over string for efficiency
	Handle<String> nameSymbol = String::NewSymbol("Picatsize");

	Handle<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		titanium::KrollModule::getProxyTemplate()
, javaClass, nameSymbol);

	proxyTemplate = Persistent<FunctionTemplate>::New(t);
	proxyTemplate->Set(titanium::Proxy::inheritSymbol,
		FunctionTemplate::New(titanium::Proxy::inherit<PicatsizeModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *proxyTemplate, true);

	// Method bindings --------------------------------------------------------
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getAvailableCameras", PicatsizeModule::getAvailableCameras);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "takePicture", PicatsizeModule::takePicture);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getIsCameraSupported", PicatsizeModule::getIsCameraSupported);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "getCameraFlashMode", PicatsizeModule::getCameraFlashMode);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "showCamera", PicatsizeModule::showCamera);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "hideCamera", PicatsizeModule::hideCamera);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "setCameraFlashMode", PicatsizeModule::setCameraFlashMode);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "openPhotoGallery", PicatsizeModule::openPhotoGallery);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "previewImage", PicatsizeModule::previewImage);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "saveToPhotoGallery", PicatsizeModule::saveToPhotoGallery);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "takeScreenshot", PicatsizeModule::takeScreenshot);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "vibrate", PicatsizeModule::vibrate);
	DEFINE_PROTOTYPE_METHOD(proxyTemplate, "switchCamera", PicatsizeModule::switchCamera);

	Local<ObjectTemplate> prototypeTemplate = proxyTemplate->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = proxyTemplate->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------
	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment in PicatsizeModule");
		//return;
	}


		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_PLAYBACK_STATE_STOPPED", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_CONTROL_DEFAULT", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_FINISH_REASON_USER_EXITED", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_CONTROL_NONE", 3);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "MEDIA_TYPE_VIDEO", "public.video");

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_PLAYBACK_STATE_INTERRUPTED", 3);

		DEFINE_INT_CONSTANT(prototypeTemplate, "CAMERA_FLASH_OFF", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "UNKNOWN_ERROR", -1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_PLAYBACK_STATE_SEEKING_FORWARD", 4);

		DEFINE_INT_CONSTANT(prototypeTemplate, "NO_ERROR", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_FINISH_REASON_PLAYBACK_ENDED", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "CAMERA_FLASH_AUTO", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_CONTROL_EMBEDDED", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "CAMERA_FLASH_ON", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "CAMERA_REAR", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_CONTROL_FULLSCREEN", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "NO_VIDEO", 3);

		DEFINE_STRING_CONSTANT(prototypeTemplate, "MEDIA_TYPE_PHOTO", "public.image");

		DEFINE_INT_CONSTANT(prototypeTemplate, "NO_CAMERA", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "DEVICE_BUSY", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_CONTROL_HIDDEN", 4);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_PLAYBACK_STATE_PAUSED", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_SCALING_NONE", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_SCALING_ASPECT_FILL", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "CAMERA_FRONT", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_FINISH_REASON_PLAYBACK_ERROR", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_LOAD_STATE_PLAYTHROUGH_OK", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_LOAD_STATE_PLAYABLE", 1);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_LOAD_STATE_STALLED", 4);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_LOAD_STATE_UNKNOWN", 0);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_SCALING_MODE_FILL", 3);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_SCALING_ASPECT_FIT", 2);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_PLAYBACK_STATE_SEEKING_BACKWARD", 5);

		DEFINE_INT_CONSTANT(prototypeTemplate, "VIDEO_PLAYBACK_STATE_PLAYING", 1);


	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(String::NewSymbol("cameraFlashMode"),
			PicatsizeModule::getter_cameraFlashMode
			, PicatsizeModule::setter_cameraFlashMode
, Handle<Value>(), DEFAULT);
	instanceTemplate->SetAccessor(String::NewSymbol("isCameraSupported"),
			PicatsizeModule::getter_isCameraSupported
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);
	instanceTemplate->SetAccessor(String::NewSymbol("availableCameras"),
			PicatsizeModule::getter_availableCameras
			, titanium::Proxy::onPropertyChanged
		, Handle<Value>(), DEFAULT);

	// Accessors --------------------------------------------------------------

	return proxyTemplate;
}

// Methods --------------------------------------------------------------------
Handle<Value> PicatsizeModule::getAvailableCameras(const Arguments& args)
{
	LOGD(TAG, "getAvailableCameras()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getAvailableCameras", "()[I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getAvailableCameras' with signature '()[I'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jintArray jResult = (jintArray)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Array> v8Result = titanium::TypeConverter::javaArrayToJsArray(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}
Handle<Value> PicatsizeModule::takePicture(const Arguments& args)
{
	LOGD(TAG, "takePicture()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "takePicture", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'takePicture' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::getIsCameraSupported(const Arguments& args)
{
	LOGD(TAG, "getIsCameraSupported()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getIsCameraSupported", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getIsCameraSupported' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}
Handle<Value> PicatsizeModule::getCameraFlashMode(const Arguments& args)
{
	LOGD(TAG, "getCameraFlashMode()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getCameraFlashMode", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getCameraFlashMode' with signature '()I'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(env, jResult);



	return v8Result;

}
Handle<Value> PicatsizeModule::showCamera(const Arguments& args)
{
	LOGD(TAG, "showCamera()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "showCamera", "(Ljava/util/HashMap;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'showCamera' with signature '(Ljava/util/HashMap;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "showCamera: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::hideCamera(const Arguments& args)
{
	LOGD(TAG, "hideCamera()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "hideCamera", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'hideCamera' with signature '()V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::setCameraFlashMode(const Arguments& args)
{
	LOGD(TAG, "setCameraFlashMode()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "setCameraFlashMode", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setCameraFlashMode' with signature '(I)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setCameraFlashMode: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	
	
		if ((titanium::V8Util::isNaN(args[0]) && !args[0]->IsUndefined()) || args[0]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::openPhotoGallery(const Arguments& args)
{
	LOGD(TAG, "openPhotoGallery()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "openPhotoGallery", "(Lorg/appcelerator/kroll/KrollDict;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'openPhotoGallery' with signature '(Lorg/appcelerator/kroll/KrollDict;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "openPhotoGallery: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsObjectToJavaKrollDict(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::previewImage(const Arguments& args)
{
	LOGD(TAG, "previewImage()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "previewImage", "(Lorg/appcelerator/kroll/KrollDict;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'previewImage' with signature '(Lorg/appcelerator/kroll/KrollDict;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "previewImage: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsObjectToJavaKrollDict(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::saveToPhotoGallery(const Arguments& args)
{
	LOGD(TAG, "saveToPhotoGallery()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "saveToPhotoGallery", "(Ljava/lang/Object;Ljava/util/HashMap;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'saveToPhotoGallery' with signature '(Ljava/lang/Object;Ljava/util/HashMap;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "saveToPhotoGallery: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[2];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	bool isNew_1;
	if (args.Length() <= 1) {
		jArguments[1].l = NULL;

	} else {
	
	if (!args[1]->IsNull()) {
		Local<Value> arg_1 = args[1];
		jArguments[1].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_1, &isNew_1);
	} else {
		jArguments[1].l = NULL;
	}
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


			if (isNew_1) {
				env->DeleteLocalRef(jArguments[1].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::takeScreenshot(const Arguments& args)
{
	LOGD(TAG, "takeScreenshot()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "takeScreenshot", "(Lorg/appcelerator/kroll/KrollFunction;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'takeScreenshot' with signature '(Lorg/appcelerator/kroll/KrollFunction;)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "takeScreenshot: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	bool isNew_0;
	
	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(env, arg_0, &isNew_0);
	} else {
		jArguments[0].l = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



			if (isNew_0) {
				env->DeleteLocalRef(jArguments[0].l);
			}


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::vibrate(const Arguments& args)
{
	LOGD(TAG, "vibrate()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "vibrate", "([J)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'vibrate' with signature '([J)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());


	jvalue jArguments[1];




	
	if (args.Length() <= 0) {
		jArguments[0].l = NULL;

	} else {
	
	if (!args[0]->IsNull()) {
		Local<Array> arg_0 = Local<Array>::Cast(args[0]);
		jArguments[0].l =
			titanium::TypeConverter::jsArrayToJavaLongArray(env, arg_0);
	} else {
		jArguments[0].l = NULL;
	}
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



				env->DeleteLocalRef(jArguments[0].l);


	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}
Handle<Value> PicatsizeModule::switchCamera(const Arguments& args)
{
	LOGD(TAG, "switchCamera()");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "switchCamera", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'switchCamera' with signature '(I)V'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "switchCamera: Invalid number of arguments. Expected 1 but got %d", args.Length());
		return ThrowException(Exception::Error(String::New(errorStringBuffer)));
	}

	jvalue jArguments[1];




	
	
		if ((titanium::V8Util::isNaN(args[0]) && !args[0]->IsUndefined()) || args[0]->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			return titanium::JSException::Error(error);
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




	return v8::Undefined();

}

// Dynamic property accessors -------------------------------------------------

Handle<Value> PicatsizeModule::getter_cameraFlashMode(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get cameraFlashMode");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getCameraFlashMode", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getCameraFlashMode' with signature '()I'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(env, jResult);



	return v8Result;

}

void PicatsizeModule::setter_cameraFlashMode(Local<String> property, Local<Value> value, const AccessorInfo& info)
{
	LOGD(TAG, "set cameraFlashMode");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment, cameraFlashMode wasn't set");
		return;
	}

	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "setCameraFlashMode", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setCameraFlashMode' with signature '(I)V'";
			LOGE(TAG, error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	
	
		if ((titanium::V8Util::isNaN(value) && !value->IsUndefined()) || value->ToString()->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber();
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException();
		env->ExceptionClear();
	}




}


Handle<Value> PicatsizeModule::getter_isCameraSupported(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get isCameraSupported");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getIsCameraSupported", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getIsCameraSupported' with signature '()Z'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}


	Handle<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(env, jResult);



	return v8Result;

}



Handle<Value> PicatsizeModule::getter_availableCameras(Local<String> property, const AccessorInfo& info)
{
	LOGD(TAG, "get availableCameras");
	HandleScope scope;

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		return titanium::JSException::GetJNIEnvironmentError();
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getAvailableCameras", "()[I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getAvailableCameras' with signature '()[I'";
			LOGE(TAG, error);
				return titanium::JSException::Error(error);
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(info.Holder());

	if (!proxy) {
		return Undefined();
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jintArray jResult = (jintArray)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Handle<Value> jsException = titanium::JSException::fromJavaException();
		env->ExceptionClear();
		return jsException;
	}

	if (jResult == NULL) {
		return Null();
	}

	Handle<Array> v8Result = titanium::TypeConverter::javaArrayToJsArray(env, jResult);

	env->DeleteLocalRef(jResult);


	return v8Result;

}




		} // picatsize
		} // skypanther
		} // com
