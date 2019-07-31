#include <jni.h>
#include <string>

#include "AndroidLog.h"



extern "C"
JNIEXPORT jstring JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_stringFromJNI(JNIEnv *env, jobject instance) {

    // TODO
    LOGD("stringFromJNI");
    std::string hello = "Hello from RTP Native C++";
    return env->NewStringUTF(hello.c_str());
}