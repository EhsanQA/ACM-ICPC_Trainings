package com.company;

import java.util.LinkedList;
import java.util.Scanner;

public class QueraHasanAtAppStore {

    public static void output(LinkedList<Integer> downloads) {
        StringBuilder result = new StringBuilder("");
        for (Integer i : downloads) {
            for (int j = 0; j < i; j++) {
                result.append("*");
            }
            System.out.println(result.toString());
        }

    }

    public static LinkedList<Integer> input() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the numbers of days: ");
        int n = scanner.nextInt();
        LinkedList<Integer> downloads = new LinkedList<>();
        System.out.println("Enter the number of downloads for each day: ");
        for (int i = 0; i < n; i++) {
            downloads.add(scanner.nextInt());
        }
        return downloads;
    }

    public static void main(String[] args) {
        output(input());
    }
}
