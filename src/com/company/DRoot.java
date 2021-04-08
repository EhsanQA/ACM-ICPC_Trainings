package com.company;

public class DRoot {
    public static int digital_root(int n) {
        return summer(n);
    }

    public static int summer(int i) {
        int sum = 0;
        while (i > 0) {
            int temp = i % 10;
            i = i / 10;
            sum += temp;
        }
        if (sum > 9) {
            sum = summer(sum);
        }
        return sum;
    }

    public static void main(String[] args) {
        //System.out.println(summer(12));
        System.out.println(digital_root(493193));
    }


}

