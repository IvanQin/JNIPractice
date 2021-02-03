package main.java.helloworld;

public class Main {

    static {
        System.loadLibrary("native");
    }

    public static void main(String[] args) {
        Main main = new Main();
        main.sayHello();
    }

    private native void sayHello();
}
