package Swapping_Numbers;

public class Without_temp {
    public static void main(String[] args) {
        int a = 6;
        int b = 7;
        
        a = a + b;
        b = a - b;
        a = a - b;

        System.out.println("a " + a);
        System.out.println("b " + b);

    }
}
