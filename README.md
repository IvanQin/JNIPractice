## Tutorial
[Guide to JNI (Java Native Interface)](https://www.baeldung.com/jni)
## Commands
1. Generated header file
    ```shell script
    javac -h ./src/main/java/helloworld/ ./src/main/java/helloworld/Main.java
    ```
2. Generate output file
    ```shell script
    g++ -c -fPIC -I${JAVA_HOME}/include -I${JAVA_HOME}/include/darwin ./src/main/java/helloworld/main_java_helloworld_Main.cpp -o ./src/main/java/helloworld/main_java_helloworld_Main.o
    ```
3. Link C++ object files into bridged library
    ```shell script
    g++ -dynamiclib -o ./src/main/java/helloworld/libnative.dylib ./src/main/java/helloworld/main_java_helloworld_Main.o -lc
    ```
4. Run the java file given the path
    ```shell script
    cd src; java -Djava.library.path=./main/java/helloworld/ main.java.helloworld.Main; cd ..
    ```
## Tips
 1. When running the first command (generate header file), you need to include all the dependent java source file as the argument to make it work.
