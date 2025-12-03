package Dayli;

import java.util.*;

public class CiTest {

    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int size = rd.nextInt();
        int[] array = new int[size];
        for (int i = 0; i < size; i++) { //n
            array[i] = rd.nextInt();
        }
        int countP = 0;
        int countI = 0;
        for (int i = 0; i < size; i++) {//n
            if (array[i] % 2 == 0) {
                countP++;
            } else {
                countI++;
            }
        }
        if (countI > countP){
            for (int i = 0; i <size ; i++) {//n
                if (array[i] % 2 == 0){
                    System.out.println(i+1);
                    break;
                }
            }
        } else if (countI < countP) {
            for (int i = 0; i <size ; i++) {//n
                if (array[i] % 2 != 0){
                    System.out.println(i+1);
                    break;
                }
            }
        }


    } //comp 4n


}
