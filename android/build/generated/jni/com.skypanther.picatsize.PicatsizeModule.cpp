/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2016 by Appcelerator, Inc. All Rights Reserved.
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




#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "PicatsizeModule"

using namespace v8;

namespace com {
namespace skypanther {
namespace picatsize {


Persistent<FunctionTemplate> PicatsizeModule::proxyTemplate;
jclass PicatsizeModule::javaClass = NULL;

PicatsizeModule::PicatsizeModule(jobject javaObject) : titanium::Proxy(javaObject)
{
}

void PicatsizeModule::bindProxy(Local<Object> exports, Local<Context> context)
{
	Isolate* isolate = context->GetIsolate();

	Local<FunctionTemplate> pt = getProxyTemplate(isolate);
	Local<Function> proxyConstructor = pt->GetFunction(context).ToLocalChecked();
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Picatsize"); // use symbol over string for efficiency
	Local<Object> moduleInstance = proxyConstructor->NewInstance(context).ToLocalChecked();
	exports->Set(nameSymbol, moduleInstance);
}

void PicatsizeModule::dispose(Isolate* isolate)
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Reset();
	}

	titanium::KrollModule::dispose(isolate);
}

Local<FunctionTemplate> PicatsizeModule::getProxyTemplate(Isolate* isolate)
{
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate.Get(isolate);
	}

	LOGD(TAG, "GetProxyTemplate");

	javaClass = titanium::JNIUtil::findClass("com/skypanther/picatsize/PicatsizeModule");
	EscapableHandleScope scope(isolate);

	// use symbol over string for efficiency
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Picatsize");

	Local<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(isolate,
		titanium::KrollModule::getProxyTemplate(isolate)
, javaClass, nameSymbol);

	proxyTemplate.Reset(isolate, t);
	t->Set(titanium::Proxy::inheritSymbol.Get(isolate),
		FunctionTemplate::New(isolate, titanium::Proxy::inherit<PicatsizeModule>)->GetFunction());

	titanium::ProxyFactory::registerProxyPair(javaClass, *t);

	// Method bindings --------------------------------------------------------
	titanium::SetProtoMethod(isolate, t, "getAvailableCameras", PicatsizeModule::getAvailableCameras);
	titanium::SetProtoMethod(isolate, t, "takePicture", PicatsizeModule::takePicture);
	titanium::SetProtoMethod(isolate, t, "setCameraFlashMode", PicatsizeModule::setCameraFlashMode);
	titanium::SetProtoMethod(isolate, t, "openPhotoGallery", PicatsizeModule::openPhotoGallery);
	titanium::SetProtoMethod(isolate, t, "previewImage", PicatsizeModule::previewImage);
	titanium::SetProtoMethod(isolate, t, "getIsCameraSupported", PicatsizeModule::getIsCameraSupported);
	titanium::SetProtoMethod(isolate, t, "saveToPhotoGallery", PicatsizeModule::saveToPhotoGallery);
	titanium::SetProtoMethod(isolate, t, "takeScreenshot", PicatsizeModule::takeScreenshot);
	titanium::SetProtoMethod(isolate, t, "vibrate", PicatsizeModule::vibrate);
	titanium::SetProtoMethod(isolate, t, "getCameraFlashMode", PicatsizeModule::getCameraFlashMode);
	titanium::SetProtoMethod(isolate, t, "showCamera", PicatsizeModule::showCamera);
	titanium::SetProtoMethod(isolate, t, "hideCamera", PicatsizeModule::hideCamera);
	titanium::SetProtoMethod(isolate, t, "switchCamera", PicatsizeModule::switchCamera);

	Local<ObjectTemplate> prototypeTemplate = t->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = t->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------
	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment in PicatsizeModule");
		//return;
	}


		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_PLAYBACK_STATE_STOPPED", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_CONTROL_DEFAULT", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_FINISH_REASON_USER_EXITED", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_CONTROL_NONE", 3);

		DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "MEDIA_TYPE_VIDEO", "public.video");

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_PLAYBACK_STATE_INTERRUPTED", 3);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CAMERA_FLASH_OFF", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "UNKNOWN_ERROR", -1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_PLAYBACK_STATE_SEEKING_FORWARD", 4);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "NO_ERROR", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_FINISH_REASON_PLAYBACK_ENDED", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CAMERA_FLASH_AUTO", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_CONTROL_EMBEDDED", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CAMERA_FLASH_ON", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CAMERA_REAR", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_CONTROL_FULLSCREEN", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "NO_VIDEO", 3);

		DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "MEDIA_TYPE_PHOTO", "public.image");

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "NO_CAMERA", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "DEVICE_BUSY", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_CONTROL_HIDDEN", 4);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_PLAYBACK_STATE_PAUSED", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_SCALING_NONE", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CAMERA_FRONT", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_SCALING_ASPECT_FILL", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_FINISH_REASON_PLAYBACK_ERROR", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_LOAD_STATE_PLAYTHROUGH_OK", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_LOAD_STATE_PLAYABLE", 1);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_LOAD_STATE_STALLED", 4);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_LOAD_STATE_UNKNOWN", 0);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_SCALING_MODE_FILL", 3);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_SCALING_ASPECT_FIT", 2);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_PLAYBACK_STATE_SEEKING_BACKWARD", 5);

		DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "VIDEO_PLAYBACK_STATE_PLAYING", 1);


	// Dynamic properties -----------------------------------------------------
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "isCameraSupported"),
			PicatsizeModule::getter_isCameraSupported,
			titanium::Proxy::onPropertyChanged,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "cameraFlashMode"),
			PicatsizeModule::getter_cameraFlashMode,
			PicatsizeModule::setter_cameraFlashMode,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::DontDelete)
		);
	instanceTemplate->SetAccessor(NEW_SYMBOL(isolate, "availableCameras"),
			PicatsizeModule::getter_availableCameras,
			titanium::Proxy::onPropertyChanged,
			Local<Value>(), DEFAULT,
			static_cast<v8::PropertyAttribute>(v8::ReadOnly | v8::DontDelete)
		);

	// Accessors --------------------------------------------------------------

	return scope.Escape(t);
}

// Methods --------------------------------------------------------------------
void PicatsizeModule::getAvailableCameras(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getAvailableCameras()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getAvailableCameras", "()[I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getAvailableCameras' with signature '()[I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jintArray jResult = (jintArray)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Array> v8Result = titanium::TypeConverter::javaArrayToJsArray(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}
void PicatsizeModule::takePicture(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "takePicture()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "takePicture", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'takePicture' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::setCameraFlashMode(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setCameraFlashMode()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "setCameraFlashMode", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setCameraFlashMode' with signature '(I)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setCameraFlashMode: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::openPhotoGallery(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "openPhotoGallery()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "openPhotoGallery", "(Lorg/appcelerator/kroll/KrollDict;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'openPhotoGallery' with signature '(Lorg/appcelerator/kroll/KrollDict;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "openPhotoGallery: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsObjectToJavaKrollDict(
				isolate,
				env, arg_0, &isNew_0);
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
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::previewImage(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "previewImage()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "previewImage", "(Lorg/appcelerator/kroll/KrollDict;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'previewImage' with signature '(Lorg/appcelerator/kroll/KrollDict;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "previewImage: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsObjectToJavaKrollDict(
				isolate,
				env, arg_0, &isNew_0);
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
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::getIsCameraSupported(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getIsCameraSupported()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getIsCameraSupported", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getIsCameraSupported' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void PicatsizeModule::saveToPhotoGallery(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "saveToPhotoGallery()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "saveToPhotoGallery", "(Ljava/lang/Object;Ljava/util/HashMap;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'saveToPhotoGallery' with signature '(Ljava/lang/Object;Ljava/util/HashMap;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "saveToPhotoGallery: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[2];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(
				isolate,
				env, arg_0, &isNew_0);
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
			titanium::TypeConverter::jsValueToJavaObject(
				isolate,
				env, arg_1, &isNew_1);
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
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::takeScreenshot(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "takeScreenshot()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "takeScreenshot", "(Lorg/appcelerator/kroll/KrollFunction;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'takeScreenshot' with signature '(Lorg/appcelerator/kroll/KrollFunction;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "takeScreenshot: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(
				isolate,
				env, arg_0, &isNew_0);
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
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::vibrate(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "vibrate()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "vibrate", "([J)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'vibrate' with signature '([J)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);


	jvalue jArguments[1];




	
	if (args.Length() <= 0) {
		jArguments[0].l = NULL;

	} else {

	if (!args[0]->IsNull()) {
		Local<Array> arg_0 = args[0].As<Array>();
		jArguments[0].l =
			titanium::TypeConverter::jsArrayToJavaLongArray(
				isolate,
				env, arg_0);
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
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::getCameraFlashMode(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getCameraFlashMode()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getCameraFlashMode", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getCameraFlashMode' with signature '()I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void PicatsizeModule::showCamera(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "showCamera()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "showCamera", "(Ljava/util/HashMap;)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'showCamera' with signature '(Ljava/util/HashMap;)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "showCamera: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	bool isNew_0;

	if (!args[0]->IsNull()) {
		Local<Value> arg_0 = args[0];
		jArguments[0].l =
			titanium::TypeConverter::jsValueToJavaObject(
				isolate,
				env, arg_0, &isNew_0);
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
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::hideCamera(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "hideCamera()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "hideCamera", "()V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'hideCamera' with signature '()V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void PicatsizeModule::switchCamera(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "switchCamera()");
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "switchCamera", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'switchCamera' with signature '(I)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	// If holder isn't the JavaObject wrapper we expect, look up the prototype chain
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(holder);

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "switchCamera: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	

		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
	if (!args[0]->IsNull()) {
		Local<Number> arg_0 = args[0]->ToNumber(isolate);
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}

// Dynamic property accessors -------------------------------------------------

void PicatsizeModule::getter_isCameraSupported(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getIsCameraSupported", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getIsCameraSupported' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}



void PicatsizeModule::getter_cameraFlashMode(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getCameraFlashMode", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getCameraFlashMode' with signature '()I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}

void PicatsizeModule::setter_cameraFlashMode(Local<Name> property, Local<Value> value, const PropertyCallbackInfo<void>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

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

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());
	if (!proxy) {
		return;
	}

	jvalue jArguments[1];

	

		if ((titanium::V8Util::isNaN(isolate, value) && !value->IsUndefined()) || value->ToString(isolate)->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
		}
	if (!value->IsNull()) {
		Local<Number> arg_0 = value->ToNumber(isolate);
		jArguments[0].i =
			titanium::TypeConverter::jsNumberToJavaInt(
				env, arg_0);
	} else {
		jArguments[0].i = NULL;
	}

	jobject javaProxy = proxy->getJavaObject();
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




}


void PicatsizeModule::getter_availableCameras(Local<Name> property, const PropertyCallbackInfo<Value>& args)
{
	Isolate* isolate = args.GetIsolate();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(PicatsizeModule::javaClass, "getAvailableCameras", "()[I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getAvailableCameras' with signature '()[I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	titanium::Proxy* proxy = titanium::Proxy::unwrap(args.Holder());

	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;

	jobject javaProxy = proxy->getJavaObject();
	jintArray jResult = (jintArray)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	if (!JavaObject::useGlobalRefs) {
		env->DeleteLocalRef(javaProxy);
	}



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Array> v8Result = titanium::TypeConverter::javaArrayToJsArray(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}




} // picatsize
} // skypanther
} // com
