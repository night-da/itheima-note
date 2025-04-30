import java.util.Scanner;

public class I006_Java基础概念_11_键盘录入 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("请输入整数");

        int i = sc.nextInt();
        System.out.println(i);
    }
}