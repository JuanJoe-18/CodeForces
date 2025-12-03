package Ladder_13;

import java.util.*;

public class BeautyYear {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        String year = rd.nextLine();
        System.out.println(detMinyear(year));
    }

    public static String detMinyear(String year) {
        int counter = 1;
        for (int i = 0; i < year.length() ; i++) {
            for (int j = 0; j <year.length() ; j++) {
                if (year.charAt(i) != year.charAt(j) && i != j){
                    counter++;
                }
            }
        }
        if (counter < 4){
           String newYear = String.valueOf(Integer.parseInt(year) + 1);
            return detMinyear(newYear);
        }
        return year;
    }
}
