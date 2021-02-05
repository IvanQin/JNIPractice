package main.java.helloworld;

public class UserDataController {

    static {
        System.loadLibrary("native");
    }

    public native UserData createUser(String name, double balance);

    public native String printUser(UserData userData);

    public static void main(String[] args) {
        UserDataController userDataController = new UserDataController();
        UserData userData = userDataController.createUser("Ivan", 100d);
        System.out.println(userDataController.printUser(userData));
    }
}
