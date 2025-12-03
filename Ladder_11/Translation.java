package Ladder_11;
import java.util.*;
public class Translation {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        String s = rd.nextLine();
        String l = rd.nextLine();
        System.out.println(isReverse(s,l));
    }

    public static String isReverse(String s, String l){
        int count =0;
        if(s.length() != l.length()){
            return "NO";
        }
        int j =s.length()-1;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == l.charAt(j)){
                count++;
            }
            j--;
        }
        return count == s.length() ? "YES":"NO";
    }


}
