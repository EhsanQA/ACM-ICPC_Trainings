// Kata: https://www.codewars.com/kata/5899a4b1a6648906fe000113

package com.company;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Routes {
    public static String findRoutes(String[][] routes) {
        System.out.println(Arrays.deepToString(routes));
        List<String> theRoutes = new ArrayList<>();
        String starter = startFinder(routes);
        int theIndex = 0;
        for (int i = 0; i < routes.length; i++) {
            if (routes[i][0].equals(starter)) {
                theIndex = i;
            }
        }
        theRoutes.add(routes[theIndex][0] + ", " + routes[theIndex][1] + ", ");
        String temp = routes[theIndex][1];
        for (int j = 0; j < routes.length; j++) {
            if (temp.equals(routes[j][0])) {
                theRoutes.add(routes[j][1] + ", ");
                temp = routes[j][1];
                j = -1;

            }
        }
        String theAnswer = "";
        for (String i : theRoutes) {
            theAnswer += i;
        }

        theAnswer = theAnswer.substring(0, theAnswer.length() - 2);

        return theAnswer;
    }




    public static String startFinder(String[][] routes) {
        int count = -1;
        int index = 0;
        String temp = routes[index][0];

        for (int i = 0; i < routes.length; i++) {
            count = -1;
            for (String[] route : routes) {
                if (count == routes.length - 1) {
                    break;
                } else if (!temp.equals(route[1])) {
                    count++;
                } else {
                    index++;
                    temp = routes[index][0];
                }
            }

        }

        return temp;
    }


    public static void main(String[] args) {
        String[][] a = new String[][]{{"San Policarpo", "Oras"}, {"Balangiga", "Lawaan"}, {"Borongan", "Maydolong"}, {"Jipapad", "Maslog"}, {"Balangkayan", "Llorente"},
                {"Mercedes", "Guiuan"}, {"Taft", "Sulat"}, {"Sulat", "San Julian"}, {"Arteche", "San Policarpo"},
                {"Oras", "Dolores"}, {"Dolores", "Can-avid"}, {"Can-avid", "Taft"}, {"San Julian", "Borongan"},
                {"Maydolong", "Balangkayan"}, {"Llorente", "Hernani"}, {"Hernani", "General MacArthur"},
                {"General MacArthur", "Giporlos"}, {"Giporlos", "Balangiga"}, {"Lawaan", "Salcedo"}, {"Salcedo", "Mercedes"},
                {"Maslog", "Arteche"}};
        System.out.println(findRoutes(a));
        System.out.println(startFinder(a));



    }

}


    /*public static String startFinder(String[][] routes) {
        int count = 0;
        int index = 0;
        String temp = routes[index][0];
        int i = -1;
        while (true) {
            i++;
            if (count == routes.length - 1) {
                break;
            }
            if (i >= routes.length || index >= routes.length) {
                break;
            }
            if (!(temp.equals(routes[i][1]))) {
                count++;
            } else {
                index++;
                temp = routes[index][0];
            }

        }

        return temp;
    }*/

