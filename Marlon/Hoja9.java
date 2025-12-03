package Marlon;

public class Hoja9 {
    public static void main(String[] args) {
        int key = 0;                        //Veces que se ejecuta
        int i= 0;
        int [] A = {1, 2, 3, 4, 5};
        for (int j= 2; j < A.length; j++) {  //Se ejecuta n-1 veces
            key = A[j];                     //Se ejecuta n-2 veces
            i = j-1;                        //Se ejecuta n-2 veces
            while (i>0 && A[i]>key){       //Se ejecuta (n-2)(m-1) veces
                i = i-1;
            }
            A[i+1] = key;
        }














































    }



}


