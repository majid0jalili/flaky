/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class ch_usi_overseerJNI_WrapperJNI */

#ifndef _Included_ch_usi_overseer_OverHpc
#define _Included_ch_usi_overseer_OverHpc
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_init
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    terminate
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_terminate
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfCpus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfCpus
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfNumas
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfNumas
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfPus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfPus
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfCpusPerNuma
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfCpusPerNuma
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfCoresPerCpu
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfCoresPerCpu
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getCpuCoreMapping
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getCpuCoreMapping
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    initEvents
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_initEvents
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    bindEventsToCore
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_bindEventsToCore
  (JNIEnv *, jobject, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    bindEventsToThread
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_bindEventsToThread
  (JNIEnv *, jobject, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    start
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_start
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    stop
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_stop
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getEventFromCPU
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_ch_usi_overseer_OverHpc_getEventFromCore
  (JNIEnv *, jobject, jint, jint);
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfEventsFromCore
  (JNIEnv *, jobject, jint);
JNIEXPORT jstring JNICALL Java_ch_usi_overseer_OverHpc_getEventNameFromCore
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getEventFromThread
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_ch_usi_overseer_OverHpc_getEventFromThread
  (JNIEnv *, jobject, jint, jint);
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfEventsFromThread
  (JNIEnv *, jobject, jint);
JNIEXPORT jstring JNICALL Java_ch_usi_overseer_OverHpc_getEventNameFromThread
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfInitializedEvents
 * Signature: (II)J
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfInitializedEvents
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfAvailableEvents
 * Signature: (II)J
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfAvailableEvents
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getNumberOfThreads
 * Signature: (II)J
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getNumberOfThreads
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getInitializedEventString
 * Signature: (II)J
 */
JNIEXPORT jstring JNICALL Java_ch_usi_overseer_OverHpc_getInitializedEventString
  (JNIEnv *, jobject, jint event);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getAvailableEventString
 * Signature: (II)J
 */
JNIEXPORT jstring JNICALL Java_ch_usi_overseer_OverHpc_getAvailableEventsString
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getThreadId
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ch_usi_overseer_OverHpc_getThreadId
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    setThreadAffinity
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_setThreadAffinity
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    setThreadAffinity
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_setThreadAffinityMask
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    getThreadAffinity
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_ch_usi_overseer_OverHpc_getThreadAffinity
  (JNIEnv *, jobject, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    reset
 * Signature: (IJ)Z
 */
JNIEXPORT void JNICALL Java_ch_usi_overseer_OverHpc_reset
  (JNIEnv *, jobject);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    setEntry
 * Signature: (IJ)Z
 */
JNIEXPORT void JNICALL Java_ch_usi_overseer_OverHpc_setEntry
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     ch_usi_overseerJNI_WrapperJNI
 * Method:    logToFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ch_usi_overseer_OverHpc_logToFile
  (JNIEnv *, jobject, jstring);


#ifdef __cplusplus
}
#endif
#endif
