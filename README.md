## Tutorial 
[Guide to JNI (Java Native Interface)](https://www.baeldung.com/jni)
## Commands
1. Generated header file 
    ```shell script
    javac -h ./main/java/helloworld/ ./main/java/helloworld/Main.java
    ```
2. Generate output file
    ```shell script
    g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin ./main/java/helloworld/main_java_helloworld_Main.cpp -o ./main/java/helloworld/main_java_helloworld_Main.o
    ```
3. Link C++ object files into bridged library
    ```shell script
    g++ -dynamiclib -o ./main/java/helloworld/libnative.dylib ./main/java/helloworld/main_java_helloworld_Main.o -lc
    ```
4. Run the java file given the path
    ```shell script
    java -Djava.library.path=./main/java/helloworld/ main.java.helloworld.Main
    ```