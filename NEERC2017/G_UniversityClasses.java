package NEERC2017;

import java.util.Scanner;

public class G_UniversityClasses {
    public static void main(String[] args) {
        Scanner rd = new Scanner(System.in);
        int n = rd.nextInt();
        String[] a = new String[n];
        for (int i = 0; i < n; i++) {
            a[i] = rd.next();
        }
        System.out.println(minRoomsNeeded(a));
    }

    public static int minRoomsNeeded(String[] schedules) {
        int maxRooms = 0;
        for (int i = 0; i < 7; i++) { // Hay 7 slots
            int roomsNeeded = 0;
            for (String schedule : schedules) {
                if (schedule.charAt(i) == '1') {
                    roomsNeeded++;
                }
            }
            maxRooms = Math.max(maxRooms, roomsNeeded);
        }
        return maxRooms;
    }
}
