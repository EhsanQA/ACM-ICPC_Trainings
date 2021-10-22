// Kata: https://www.codewars.com/kata/5592e3bd57b64d00f3000047

package com.company;

public class ASum {
    public static long findNb(long m) {
        long vol = 0;
        long i = 1;
        while (vol <= m) {
            if (vol > m) {
                break;
            }
            vol += i * i * i;
            if (vol == m) {
                return i;
            }
            i++;

        }
        return -1;
    }


    public static void main(String[] args) {
        System.out.println(findNb(55100));
    }
}
