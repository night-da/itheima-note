package I018_面向对象_02_类和对象;

public class I018_面向对象_02_类和对象 {
    public static void main(String[] args) {
        Phone p = new Phone();

        p.brand = "小米";
        p.price = 1999.98;

        System.out.println(p.brand);
        System.out.println(p.price);

        p.call();
        p.playGame();
    }
}