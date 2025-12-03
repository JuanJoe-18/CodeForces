package Ladder_11;

import java.lang.reflect.Array;
import java.util.*;

public class Helpful_Maths {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        String sum = rd.nextLine();
        System.out.println(reOrderSum(sum));
    }

    public static String reOrderSum(String sum) {
        //paso 1: detectar los números y ordenarlos
        ArrayList<Integer> numbers = new ArrayList<>();
        for (int i = 0; i < sum.length(); i++) {
            if (sum.charAt(i) == '1' || sum.charAt(i) == '2' || sum.charAt(i) == '3') {
                numbers.add(sum.charAt(i) - '0');// la unica manera que encontre de convertir un char a int
            }
        }
        Collections.sort(numbers);
        //paso 2: agregar los sumados correspondientes
        StringBuilder Sum = new StringBuilder();
        for (int i = 0; i < numbers.size(); i++) {
            Sum.append(numbers.get(i));
            if (i != numbers.size() - 1) {
                Sum.append('+');
            }
        }
        return Sum.toString();
    }
}
