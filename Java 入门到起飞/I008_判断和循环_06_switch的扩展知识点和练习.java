public class I008_�жϺ�ѭ��_06_switch����չ֪ʶ�����ϰ {
    public static void main(String[] args) {
        // switch�����ԣ�JDK 12
        int number = 1;
        switch (number) {
            case 1 -> {
                System.out.println("һ");
            }
            case 2 -> {
                System.out.println("��");
            }
            case 3 -> {
                System.out.println("��");
            }
            default -> {
                System.out.println("û������ѡ��");
            }
        }
    }
}