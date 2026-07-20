

import java.io.DataInputStream;
import java.io.IOException;
import java.util.Arrays;

public class Apartments {

    static class Reader {
        private final int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;

        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }

        // Reads the next integer from input
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();
            while (c <= ' ') {
                c = read();
            }
            boolean neg = (c == '-');
            if (neg) c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');
            return neg ? -ret : ret;
        }

        // Reads the next byte from the buffer
        private byte read() throws IOException {
            if (bufferPointer == bytesRead) fillBuffer();
            return buffer[bufferPointer++];
        }

        // Fills the buffer with new data
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1) buffer[0] = -1;
        }
    }

    static final int inf = 1000000000;

    static int[] sizeApartachoDeseado = new int[200000];
    static int[] sizeApartachosDisponibles = new int[200000];

    public static void main(String[] args) throws IOException {
        Reader rd = new Reader();

        for (int i = 0; i <200000 ; i++) {
            sizeApartachoDeseado[i] = inf;
            sizeApartachosDisponibles[i] = inf;
        }

        int n = rd.nextInt(); // numero de solicitantes
        int m = rd.nextInt(); // numero de   apartamentos disponibles
        int k = rd.nextInt(); // diferencia maxima


        for (int i = 0; i < n; i++) {
            sizeApartachoDeseado[i] = rd.nextInt();
        }
        for (int i = 0; i < m; i++) {
            sizeApartachosDisponibles[i] = rd.nextInt();
        }
        System.out.println(montados(n, m, k));
    }

    public static int montados( int n, int m, int k) {
        Arrays.sort(sizeApartachoDeseado);
        Arrays.sort(sizeApartachosDisponibles);

        int i = 0, j = 0, cuantos = 0;
        while (i < n && j < m) {
            if (Math.abs(sizeApartachoDeseado[i] - sizeApartachosDisponibles[j]) <= k) {
                cuantos++;
                i++;
                j++;
            } else if (sizeApartachoDeseado[i] < sizeApartachosDisponibles[j]) {
                i++;
            } else {
                j++;
            }
        }
        return cuantos;
    }
}