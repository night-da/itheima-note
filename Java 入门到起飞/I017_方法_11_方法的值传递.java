public class I017_����_11_������ֵ���� {
    public static void main(String[] args) {
        int[] arr = {10, 20, 30};
        System.out.println("����change����ǰ��" + arr[1]);
        change(arr);
        System.out.println("����change������" + arr[1]);
    }

    public static void change(int[] arr) {
        arr[1] = 200;
    }
}