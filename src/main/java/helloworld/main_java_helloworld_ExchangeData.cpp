#include "main_java_helloworld_ExchangeData.h"
#include <iostream>
#include <stdio.h>

JNIEXPORT jlong JNICALL Java_main_java_helloworld_ExchangeData_sumIntegers
  (JNIEnv * env, jobject thisObject, jint first, jint second){
  std::cout << "C++: The numbers received are: " << first << " and " << second << std::endl;
  return (long)first + (long) second;
  }

JNIEXPORT jstring JNICALL Java_main_java_helloworld_ExchangeData_sayHelloToMe
  (JNIEnv * env, jobject thisObject, jstring name, jboolean isFemale){
    const char* namePointer = env->GetStringUTFChars(name, NULL);
    std::string title;
    if (isFemale){
      title = "Ms. ";
    }else{
      title = "Mr. ";
    }
    std::string fullName = title + namePointer;
    return env->NewStringUTF(fullName.c_str());
  }
