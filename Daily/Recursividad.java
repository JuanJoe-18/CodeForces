package Dayli;

public class Recursividad {
    public static void main(String[] args) {
        System.out.println(fctorial(5));
        System.out.println(fibonacci(5));
        System.out.println(recursiveSum(5));
    }

    public static int fctorial(int num){
        if (num == 0) {
            return 1;
        }
        else
            return num*fctorial(num);
    }

    public static int fibonacci(int num){
        if (num == 0) {
            return 0;
        }
        else if (num == 1) {
            return 1;
        }
        else
            return fibonacci(num-1)+fibonacci(num-2);
    }

    public static int recursiveSum(int num){
        if (num == 1) {
            return 1;
        }
        else
            return num+recursiveSum(num-1);
    }

    public static int power(int base, int exponent){
        if (exponent == 0) {
            return 1;
        } else
            return base*power(base, exponent-1);
    }
}

