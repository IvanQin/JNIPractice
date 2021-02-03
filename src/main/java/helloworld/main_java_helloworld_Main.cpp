#include "main_java_helloworld_Main.h"
#include <stdio.h>
#include <iostream>

JNIEXPORT void JNICALL Java_main_java_helloworld_Main_sayHello
  (JNIEnv * env, jobject thisObject){
    std::cout << "Hello from C++" << std::endl;
  }
