package Dayli;

import java.util.Scanner;

public class Soldier {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int k = rd.nextInt();
        int n = rd.nextInt();
        int w = rd.nextInt();
        int s = 0;
        System.out.println(howManyDollars(k,n,w,s));
    }
    public static int howManyDollars (int k, int n, int w, int s){
        if(w==1){
            s = 2*k;
        }else {
            for (int i = 1; i < w+1; i++) {
                s += i*k;
            }
        }
        return Math.abs(n-s);
    }





















}
