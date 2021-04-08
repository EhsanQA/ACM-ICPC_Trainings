// This Solution Turns a String of words that
// the Words have been splited by '-' or '_' to
// CamelCase.

package com.company;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

public class CamelCaser {
    static String toCamelCase(String s){
        StringBuilder sb = new StringBuilder(s);
        for (int i = 0; i < sb.length(); i++) {
            if (sb.charAt(i) == '-' || sb.charAt(i) == '_') {
                sb.deleteCharAt(i);
                sb.setCharAt(i, Character.toUpperCase(sb.charAt(i)));
            }
        }
        return sb.toString();
    }

    public static void main(String[] args) {
        System.out.println(toCamelCase("The_Stealth_Warrior"));
    }
}
