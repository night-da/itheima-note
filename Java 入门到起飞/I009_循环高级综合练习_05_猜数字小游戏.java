import java.util.Random;

public class I009_ѭ���߼��ۺ���ϰ_05_������С��Ϸ {
    public static void main(String[] args) {
        Random r = new Random();

        for (int i = 0; i < 100; i++) {
            // [0, 10)
            int number = r.nextInt(10);
            System.out.println(number);
        }
    }
}