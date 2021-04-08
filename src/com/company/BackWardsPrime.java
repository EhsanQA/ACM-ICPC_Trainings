// Kata: https://www.codewars.com/kata/5539fecef69c483c5a000015

package com.company;

public class BackWardsPrime {
    public static String backwardsPrime(long start, long end) {
        String answer = "";
        for (long i = start; i <= end; i++) {
            if (isPrime(i) && isPrime(swapper(i)) &&
            i >= 10 && !(i == swapper(i))) {
                answer += i + " ";
            }
        }
        if (answer.length() != 0) {
            answer = answer.substring(0, answer.length() - 1);
        }

        return answer;
    }

    public static boolean isPrime(long num) {
        for (long i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static long swapper(long n) {
        String num = String.valueOf(n);
        String[] theNum = num.split("");
        for (int i = 0; i < theNum.length / 2; i++) {
            String temp = theNum[i];
            theNum[i] = theNum[theNum.length - i - 1];
            theNum[theNum.length - i - 1] = temp;
        }

        String theAnswer = "";
        for (String i : theNum) {
            theAnswer += i;
        }


        return Long.valueOf(theAnswer);
    }


    public static void main(String[] args) {
        System.out.println(backwardsPrime(501, 599));
        //System.out.println(isPrime(9923));
        //System.out.println(swapper(99235));
        //System.out.println(isPrime(swapper(9923)));
    }

}



