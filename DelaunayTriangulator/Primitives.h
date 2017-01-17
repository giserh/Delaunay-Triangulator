/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Primitives */

#ifndef _Included_Primitives
#define _Included_Primitives
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Primitives
 * Method:    incircle
 * Signature: ([D[D[D[D)D
 */
JNIEXPORT jdouble JNICALL Java_Primitives_incircle
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray, jdoubleArray);

/*
 * Class:     Primitives
 * Method:    orient2d
 * Signature: ([D[D[D)D
 */
JNIEXPORT jdouble JNICALL Java_Primitives_orient2d
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray);

/*
 * Class:     Primitives
 * Method:    computeCircumcenter
 * Signature: ([D[D[D)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_Primitives_computeCircumcenter
  (JNIEnv *, jclass, jdoubleArray, jdoubleArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif