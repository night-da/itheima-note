package I012_����_04_����Ķ�̬��ʼ���ͳ�������;

public class I012_����_04_����Ķ�̬��ʼ���ͳ������� {
    public static void main(String[] args) {
        String[] arr_1 = new String[50];

        arr_1[0] = "zhangsan";
        arr_1[1] = "lisi";

        System.out.println(arr_1[0]);
        System.out.println(arr_1[1]);
        System.out.println(arr_1[2]);

        // �����Ĭ�ϳ�ʼ����
        // ������0
        // С����0.0
        // �ַ���'\u0000'(�ո�)
        // ������false
        // ���ã�null

        int[] arr_2 = new int[3];
        System.out.println(arr_2[0]);
        System.out.println(arr_2[1]);
        System.out.println(arr_2[2]);
    }
}