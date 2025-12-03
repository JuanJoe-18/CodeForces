package Ladder_13;
import java.util.*;

public class New {

    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        String s = rd.nextLine();
        System.out.println(find_ones(s));
    }

    public static int find_ones(String s){
        ArrayList<String> container =  new ArrayList<>();
        int counter = 0;
        for (int i = 0; i < s.length(); i++) {
            container.add(fill_and_replace(s,s.length(),i));
        }
        for (int i = 0; i < container.size(); i++) {
            if (container.get(i) == "1"){
                counter++;
            }
        }
        return counter;
    }

    public static String fill_and_replace(String s, int lenght,int i){
        char[] A_i = new char[lenght];
        for (int l = 0; l < A_i.length ; l++) {
            A_i[l] = s.charAt(l);
        }
        for (int j = 0; j < A_i.length; j++) {
            if(i == j){
                if (A_i[i] == '0'){
                    A_i[i] = '1';
                }else{
                    A_i[i] = '0';
                }
            }
        }
        return A_i.toString();
    }


}

