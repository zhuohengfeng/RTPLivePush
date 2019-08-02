#include <jni.h>
#include <string>

#include "AndroidLog.h"
#include "RtpPush.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_init(JNIEnv *env, jclass type, jint width,
                                                   jint height, jint outWidth, jint outHeight) {

    // TODO
    RtpPush rtpPush;
    rtpPush.initRtp();

}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_release(JNIEnv *env, jclass type) {

    // TODO

}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_yuvI420ToNV21(JNIEnv *env, jclass type,
                                                            jbyteArray i420Src_,
                                                            jbyteArray nv21Src_, jint width,
                                                            jint height) {
    jbyte *i420Src = env->GetByteArrayElements(i420Src_, NULL);
    jbyte *nv21Src = env->GetByteArrayElements(nv21Src_, NULL);

    // TODO

    env->ReleaseByteArrayElements(i420Src_, i420Src, 0);
    env->ReleaseByteArrayElements(nv21Src_, nv21Src, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_compressYUV(JNIEnv *env, jclass type, jbyteArray src_,
                                                          jint width, jint height, jbyteArray dst_,
                                                          jint dst_width, jint dst_height,
                                                          jint mode, jint degree,
                                                          jboolean isMirror) {
    jbyte *src = env->GetByteArrayElements(src_, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_, NULL);

    // TODO

    env->ReleaseByteArrayElements(src_, src, 0);
    env->ReleaseByteArrayElements(dst_, dst, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_cropYUV(JNIEnv *env, jclass type, jbyteArray src_,
                                                      jint width, jint height, jbyteArray dst_,
                                                      jint dst_width, jint dst_height, jint left,
                                                      jint top) {
    jbyte *src = env->GetByteArrayElements(src_, NULL);
    jbyte *dst = env->GetByteArrayElements(dst_, NULL);

    // TODO

    env->ReleaseByteArrayElements(src_, src, 0);
    env->ReleaseByteArrayElements(dst_, dst, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_encoderVideoinit(JNIEnv *env, jclass type,
                                                               jint in_width, jint in_height,
                                                               jint out_width, jint out_height) {

    // TODO

}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_encoderVideoEncode(JNIEnv *env, jclass type,
                                                                 jbyteArray srcFrame_,
                                                                 jint frameSize, jint fps,
                                                                 jbyteArray dstFrame_,
                                                                 jintArray outFramewSize_) {
    jbyte *srcFrame = env->GetByteArrayElements(srcFrame_, NULL);
    jbyte *dstFrame = env->GetByteArrayElements(dstFrame_, NULL);
    jint *outFramewSize = env->GetIntArrayElements(outFramewSize_, NULL);

    // TODO

    env->ReleaseByteArrayElements(srcFrame_, srcFrame, 0);
    env->ReleaseByteArrayElements(dstFrame_, dstFrame, 0);
    env->ReleaseIntArrayElements(outFramewSize_, outFramewSize, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_encoderAudioInit(JNIEnv *env, jclass type,
                                                               jint sampleRate, jint channels,
                                                               jint bitRate) {

    // TODO

}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_encoderAudioEncode(JNIEnv *env, jclass type,
                                                                 jbyteArray srcFrame_,
                                                                 jint frameSize,
                                                                 jbyteArray dstFrame_,
                                                                 jint dstSize) {
    jbyte *srcFrame = env->GetByteArrayElements(srcFrame_, NULL);
    jbyte *dstFrame = env->GetByteArrayElements(dstFrame_, NULL);

    // TODO

    env->ReleaseByteArrayElements(srcFrame_, srcFrame, 0);
    env->ReleaseByteArrayElements(dstFrame_, dstFrame, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_initRtmpData(JNIEnv *env, jclass type, jstring url_) {
    const char *url = env->GetStringUTFChars(url_, 0);

    // TODO

    env->ReleaseStringUTFChars(url_, url);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_sendRtmpVideoSpsPPS(JNIEnv *env, jclass type,
                                                                  jbyteArray sps_, jint spsLen,
                                                                  jbyteArray pps_, jint ppsLen,
                                                                  jlong timeStamp) {
    jbyte *sps = env->GetByteArrayElements(sps_, NULL);
    jbyte *pps = env->GetByteArrayElements(pps_, NULL);

    // TODO

    env->ReleaseByteArrayElements(sps_, sps, 0);
    env->ReleaseByteArrayElements(pps_, pps, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_sendRtmpVideoData(JNIEnv *env, jclass type,
                                                                jbyteArray data_, jint dataLen,
                                                                jlong timeStamp) {
    jbyte *data = env->GetByteArrayElements(data_, NULL);

    // TODO

    env->ReleaseByteArrayElements(data_, data, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_sendRtmpAudioSpec(JNIEnv *env, jclass type,
                                                                jlong timeStamp) {

    // TODO

}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_sendRtmpAudioData(JNIEnv *env, jclass type,
                                                                jbyteArray data_, jint dataLen,
                                                                jlong timeStamp) {
    jbyte *data = env->GetByteArrayElements(data_, NULL);

    // TODO

    env->ReleaseByteArrayElements(data_, data, 0);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_ryan_rtplivepush_rtp_RtpNativeHelper_releaseRtmp(JNIEnv *env, jclass type) {

    // TODO

}