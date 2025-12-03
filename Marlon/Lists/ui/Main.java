package Marlon.Lists.ui;

import java.util.Scanner;
import Marlon.Lists.model.DoubleList;
import Marlon.Lists.model.CircularList;

public class Main {
    public static Scanner rd = new Scanner(System.in);

    public static void main(String[] args) {
        mainMenu();
    }

    public static void mainMenu() {
        int mainOption;
        do {
            System.out.println("Select an option");
            System.out.println("1. Double List");
            System.out.println("2. Circular List");
            System.out.println("0. Exit");
            mainOption = rd.nextInt();

            switch (mainOption) {
                case 1:
                    doubleListMenu();
                    break;
                case 2:
                    circularListMenu();
                    break;
                case 0:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid option");
            }
        } while (mainOption != 0);
    }

    public static void doubleListMenu() {
        DoubleList<Integer> list = new DoubleList<>();
        int doubleListOption;
        do {
            System.out.println("Select an option");
            System.out.println("1. Add");
            System.out.println("2. Show");
            System.out.println("3. Delete");
            System.out.println("4. Search");
            System.out.println("0. Exit");
            doubleListOption = rd.nextInt();

            switch (doubleListOption) {
                case 1:
                    System.out.println("Enter the number to add");
                    int addData = rd.nextInt();
                    list.add(addData);
                    break;
                case 2:
                    list.printList();
                    break;
                case 3:
                    System.out.println("Enter the number to delete");
                    int deleteData = rd.nextInt();
                    list.delete(deleteData);
                    break;
                case 4:
                    System.out.println("Enter the number to search");
                    int searchData = rd.nextInt();
                    boolean found = list.search(searchData);
                    System.out.println("Found: " + found);
                    break;
                case 0:
                    System.out.println("Returning to main menu");
                    break;
                default:
                    System.out.println("Invalid option");
            }
        } while (doubleListOption != 0);
    }

    public static void circularListMenu() {
        CircularList<Integer> list = new CircularList<>();
        int circularListOption;
        do {
            System.out.println("Select an option");
            System.out.println("1. Add");
            System.out.println("2. Show");
            System.out.println("3. Delete");
            System.out.println("4. Search");
            System.out.println("0. Exit");
            circularListOption = rd.nextInt();

            switch (circularListOption) {
                case 1:
                    System.out.println("Enter the number to add");
                    int addData = rd.nextInt();
                    list.add(addData);
                    break;
                case 2:
                    list.printList();
                    break;
                case 3:
                    System.out.println("Enter the number to delete");
                    int deleteData = rd.nextInt();
                    list.delete(deleteData);
                    break;
                case 4:
                    System.out.println("Enter the number to search");
                    int searchData = rd.nextInt();
                    boolean found = list.search(searchData);
                    System.out.println("Found: " + found);
                    break;
                case 0:
                    System.out.println("Returning to main menu");
                    break;
                default:
                    System.out.println("Invalid option");
            }
        } while (circularListOption != 0);
    }


}