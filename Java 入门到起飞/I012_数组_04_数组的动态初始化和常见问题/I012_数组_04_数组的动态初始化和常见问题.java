package I012_数组_04_数组的动态初始化和常见问题;

public class I012_数组_04_数组的动态初始化和常见问题 {
    public static void main(String[] args) {
        String[] arr_1 = new String[50];

        arr_1[0] = "zhangsan";
        arr_1[1] = "lisi";

        System.out.println(arr_1[0]);
        System.out.println(arr_1[1]);
        System.out.println(arr_1[2]);

        // 数组的默认初始化：
        // 整数：0
        // 小数：0.0
        // 字符：'\u0000'(空格)
        // 布尔：false
        // 引用：null

        int[] arr_2 = new int[3];
        System.out.println(arr_2[0]);
        System.out.println(arr_2[1]);
        System.out.println(arr_2[2]);
    }
}