import java.io.DataInputStream;
import java.io.IOException;
import java.util.Arrays;
import java.util.Random;

public class FerrisWheel {
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

    /*public static void main(String[] args) throws IOException {
         Reader rd = new Reader();
         int n = rd.nextInt();
         int max = rd.nextInt();
         int [] weights = new int[n];
        for (int i = 0; i < n; i++) {
            weights[i] = rd.nextInt();
        }
        System.out.println(determinateHowManyChilds(weights,n,max));
    }

    public static int determinateHowManyChilds(int [] w, int n,int m){
        int gondolas = 0;
        Arrays.sort(w);
        int i = 0;int j = n-1;
        while (i <= j){
            if ((w[i] + w[j]) <= m){
               i++;
            }
            j--;
            gondolas++;
        }
        return gondolas;
    }*/

    public static void main(String[] args) throws IOException {
        int[] weights = readInput();
        int n = weights.length;
        int max = weights[n - 1];
        System.out.println(determinateHowManyChilds(weights, n - 1, max));
    }

    private static int[] readInput() throws IOException {
        Reader rd = new Reader();
        int n = rd.nextInt();
        int max = rd.nextInt();
        int[] weights = new int[n + 1];
        for (int i = 0; i < n; i++) {
            weights[i] = rd.nextInt();
        }
        weights[n] = max;
        return weights;
    }

    public static int determinateHowManyChilds(int[] w, int n, int m) {
        Arrays.sort(w);
        int gondolas = 0;
        for (int i = 0, j = n - 1; i <= j; j--) {
            if (w[i] + w[j] <= m) {
                i++;
            }
            gondolas++;
        }
        return gondolas;
    }


























}
