#WARNING THIS Android.mk IS AUTOGENERATED (DO NOT MODIFY)

LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../libzip/ $(LOCAL_PATH)/../openal/
LOCAL_STATIC_LIBRARIES := libzip libopenal libtremolo 
LOCAL_MODULE    := pineapple 
LOCAL_SRC_FILES :=  Audio.cpp  Engine.cpp  GL.cpp  GLFramebufferObject.cpp  GLPrimitive.cpp  GLShader.cpp  GLShaderProgram.cpp  GLText.cpp  GLTexture.cpp  PineappleLib.cpp  Scene.cpp  SceneObject.cpp  VSML.cpp
LOCAL_LDLIBS    := -llog -lGLESv2 -ldl -lz
include $(BUILD_SHARED_LIBRARY)
