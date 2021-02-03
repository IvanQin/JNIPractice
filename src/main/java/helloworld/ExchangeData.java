package main.java.helloworld;

public class ExchangeData {

    static{
        System.loadLibrary("native");
    }

    private native long sumIntegers(int first, int second);

    private native String sayHelloToMe(String name, boolean isFemale);

    public static void main(String[] args) {
        ExchangeData exchangeData = new ExchangeData();

        System.out.println(exchangeData.sumIntegers(1, 2));

        exchangeData.sayHelloToMe("Ivan", false);
    }

}
