#include "main_java_helloworld_UserDataController.h"
#include <stdio.h>
#include <iostream>

JNIEXPORT jobject JNICALL Java_main_java_helloworld_UserDataController_createUser
  (JNIEnv * env, jobject thisObject, jstring name, jdouble balance){
    // Create the object of the class UserData
    jclass userDataClass = env->FindClass("main/java/helloworld/UserData");
    jobject newUserData = env->AllocObject(userDataClass);

    // Get the UserData fields to be set
    jfieldID nameField = env->GetFieldID(userDataClass , "name", "Ljava/lang/String;");
    jfieldID balanceField = env->GetFieldID(userDataClass , "balance", "D");

    env->SetObjectField(newUserData, nameField, name);
    env->SetDoubleField(newUserData, balanceField, balance);

    return newUserData;

  }

JNIEXPORT jstring JNICALL Java_main_java_helloworld_UserDataController_printUser
  (JNIEnv * env, jobject thisObject, jobject userData){
      // Find the id of the Java method to be called
    jclass userDataClass=env->GetObjectClass(userData);
    jmethodID methodId=env->GetMethodID(userDataClass, "getUserInfo", "()Ljava/lang/String;");

    jstring result = (jstring)env->CallObjectMethod(userData, methodId);
    return result;
  }
