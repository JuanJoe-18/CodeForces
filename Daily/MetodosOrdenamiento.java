package Dayli;

public class MetodosOrdenamiento {

    /*For i = 0 to n-1 do:
       minimum = i
       For j = i + 1 to n do:
         If A(j) < A(minimum)
           minimum = j
         End-If
       End-For
       temp = A(minimum)
       A(minimum) = A(i)
       A(i) = temp
     End-For
*/
    public static int [] numeros = {4,2,25,6,7,12,10};
    public static int [] numbers = {10,9,8,7,6,5,4,3,2,1,0};

    public static void main(String[] args) {
        System.out.println("Prueba\n");
        selectonSort();
        insertionSort();
        mostrar();
    }

    public static void mostrar(){
        System.out.println("Ordenamiento por selección:\n");
        for (int i = 0; i < numeros.length; i++) {
            System.out.print(numeros[i]);
            System.out.println("\n");
        }
        System.out.println("Ordenamiento por inserción:\n");
        for (int i = 0; i < numbers.length; i++) {
            System.out.print(numbers[i]);
        }

    }

    public static int[] selectonSort(){
        int n = numeros.length;
        for (int i = 0; i < n-1 ; i++) {
            int min = i;
            for (int j = i  + 1; j < n; j++) {
                if (numeros[j] < numeros[min]){
                    min = j;
                }
            }
            int temp = numeros[min];
            numeros[min] = numeros[i];
            numeros[i] = temp;
        }
        return numeros;
    }

    public static int[] insertionSort() {
        for (int i = 1; i < numbers.length; i++) {
            int key = numbers[i];
            int j = i - 1;
            while (j >= 0 && numbers[j] > key) {
                numbers[j + 1] = numbers[j];
                j = j - 1;
            }
            numbers[j + 1] = key;
        }
        return numbers;
    }








}

