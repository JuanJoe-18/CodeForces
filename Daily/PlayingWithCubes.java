package Dayli;

import java.util.Scanner;

public class PlayingWithCubes {

    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int redCubes = rd.nextInt();
        int blueCubes = rd.nextInt();
        pointsPeytaVasya( redCubes,  blueCubes);
    }

    public static void pointsPeytaVasya(int redCubes, int blueCubes){
        int peyta = 0;
        int vasya = 0;
        if (blueCubes >= redCubes) {
            peyta = blueCubes - 1;
            vasya = redCubes;
        } else {
            peyta = redCubes - 1;
            vasya = blueCubes;
        }
        System.out.println(peyta + " " + vasya);
    }
















}

