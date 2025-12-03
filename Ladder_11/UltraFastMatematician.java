package Ladder_11;
import java.util.*;
public class UltraFastMatematician {
    public static void main(String[] args) {
       Scanner rd = new Scanner(System.in);
        String n1 = rd.nextLine();
        String n2 = rd.nextLine();
         char [] n_1 = n1.toCharArray();
         char [] n_2 = n2.toCharArray();
        StringBuilder number = new StringBuilder();
        for (int i = 0; i < n2.length(); i++) {
            if (n_1[i] == n_2[i]){
                number.append('0');
            }else{
                number.append('1');
            }
        }
        System.out.println(number);
    }

}
