import java.util.Random;

public class I009_循环高级综合练习_05_猜数字小游戏 {
    public static void main(String[] args) {
        Random r = new Random();

        for (int i = 0; i < 100; i++) {
            // [0, 10)
            int number = r.nextInt(10);
            System.out.println(number);
        }
    }
}