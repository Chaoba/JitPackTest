#include <jni.h>
#include <string>
#include "include/Layer1.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_com_mushuichuan_library_NativeApi_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = net_client_layer1.getResponse();
    return env->NewStringUTF(hello.c_str());
}
