#include <jni.h>
#include <string>
using namespace std;

extern "C"


JNIEXPORT jstring JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_getFFmpegConfig(JNIEnv *env, jclass type) {

    // TODO


    return env->NewStringUTF(returnValue);
}

JNIEXPORT jint JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_jxCMDRun(JNIEnv *env, jclass type, jobjectArray cmd) {

    // TODO

}

JNIEXPORT jint JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_encodeFrame2H264(JNIEnv *env, jclass type,
                                                         jbyteArray data_) {
    jbyte *data = env->GetByteArrayElements(data_, NULL);

    // TODO

    env->ReleaseByteArrayElements(data_, data, 0);
}

JNIEXPORT jint JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_encodeFrame2AAC(JNIEnv *env, jclass type,
                                                        jbyteArray data_) {
    jbyte *data = env->GetByteArrayElements(data_, NULL);

    // TODO

    env->ReleaseByteArrayElements(data_, data, 0);
}

JNIEXPORT jint JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_recordEnd(JNIEnv *env, jclass type) {

    // TODO

}

JNIEXPORT void JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_initJXFFmpeg(JNIEnv *env, jclass type, jboolean debug,
                                                     jstring logUrl_) {
    const char *logUrl = env->GetStringUTFChars(logUrl_, 0);

    // TODO

    env->ReleaseStringUTFChars(logUrl_, logUrl);
}

JNIEXPORT void JNICALL
Java_com_alick_helloffmpeg_FFmpegBridge_nativeRelease(JNIEnv *env, jclass type) {

    // TODO

}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_alick_helloffmpeg_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
