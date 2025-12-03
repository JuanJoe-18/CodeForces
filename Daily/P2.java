package Dayli;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class P2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character

        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt();
            scanner.nextLine();
            String tasks = scanner.nextLine();
            System.out.println(isSuspicious(tasks) ? "NO" : "SI");
        }
    }

    private static boolean isSuspicious(String tasks) {
        Set<Character> completedTasks = new HashSet<>();
        char lastTask = tasks.charAt(0);
        completedTasks.add(lastTask);

        for (int i = 1; i < tasks.length(); i++) {
            char currentTask = tasks.charAt(i);
            if (currentTask != lastTask) {
                if (completedTasks.contains(currentTask)) {
                    return true;
                }
                completedTasks.add(currentTask);
                lastTask = currentTask;
            }
        }
        return false;
    }
}