LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

TARGET_PLATFORM := 21
LOCAL_MODULE    := DroidBlaster
LOCAL_SRC_FILES := Main.cpp EventLoop.cpp Log.cpp
LOCAL_LDLIBS    := -llog -landroid
LOCAL_STATIC_LIBRARIES := android_native_app_glue

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)