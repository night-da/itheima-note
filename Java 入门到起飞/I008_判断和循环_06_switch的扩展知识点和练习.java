public class I008_判断和循环_06_switch的扩展知识点和练习 {
    public static void main(String[] args) {
        // switch新特性：JDK 12
        int number = 1;
        switch (number) {
            case 1 -> {
                System.out.println("一");
            }
            case 2 -> {
                System.out.println("二");
            }
            case 3 -> {
                System.out.println("三");
            }
            default -> {
                System.out.println("没有这种选项");
            }
        }
    }
}