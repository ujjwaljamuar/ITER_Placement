package Swapping_Numbers;

public class With_temp {
    public static void main(String[] args) {
        int a = 6;
        int b = 7;
        
        int temp = a;
        a = b;
        b = temp;

        System.out.println("a " + a);
        System.out.println("b " + b);

    }
}
