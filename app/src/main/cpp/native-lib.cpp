#include <jni.h>
#include <string>
#include <Test.h>

#include <android/log.h>

#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, "libnav", __VA_ARGS__)

#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG  , "libnav", __VA_ARGS__)

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO   , "libnav", __VA_ARGS__)

#define LOGW(...) __android_log_print(ANDROID_LOG_WARN   , "libnav", __VA_ARGS__)

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR  , "libnav", __VA_ARGS__)

extern "C"

JNIEXPORT jstring JNICALL Java_com_lee_kr_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    int a = 1;
    int b = 2;
    GS(&a, &b);
    LOGI(">>>>>>> a : %d\n",a);
    LOGI(">>>>>>> b : %d\n",b);
    return env->NewStringUTF(hello.c_str());
}