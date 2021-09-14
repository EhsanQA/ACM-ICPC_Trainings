package com.company;

import java.math.BigInteger;

public class Omid_Fibonacci {
    static BigInteger v0 = new BigInteger(String.valueOf(0));
    static BigInteger v1 = new BigInteger(String.valueOf(1));
    static BigInteger v2 = new BigInteger(String.valueOf(1));
    static BigInteger v3 = new BigInteger(String.valueOf(2));
    static BigInteger temp = new BigInteger(String.valueOf(0));


    static BigInteger f(BigInteger a, BigInteger b) {
        BigInteger ans = new BigInteger(String.valueOf(10)).multiply(a);
        return ans.add(b);
    }

    public static void main(String[] args) {
        BigInteger i = new BigInteger(String.valueOf(0));
        for (; !i.equals(new BigInteger(String.valueOf(1000000))); i = i.add(new BigInteger(String.valueOf(1)))) {
//            System.out.println(temp);
            BigInteger c = f(v2, v3).mod(f(v0, v1));
            c = c.subtract(temp.multiply(new BigInteger(String.valueOf(10))));
            if (!c.equals(v0)) {
                System.out.println("MESAL NAGZ");
                return;
            } else {
                temp = v0;
                v0 = v1;
                v1 = v2;
                v2 = v3;
                v3 = v2.add(v1);
            }
        }
        System.out.println(temp);
        System.out.println("DIDN't FOUND ANY MESAL NAGZES");
    }

}
