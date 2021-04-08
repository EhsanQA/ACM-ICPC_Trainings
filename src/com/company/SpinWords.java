package com.company;

import java.util.ArrayList;
import java.util.List;

public class SpinWords {
    public static String spinWords(String sentence) {
        List<Integer> spaces = new ArrayList<>();
        for (int i = 0; i < sentence.length(); i++) {
            if (sentence.charAt(i) == ' ') {
                spaces.add(i);
            }
        }
        String[] words = sentence.split(" ");
        String theAnswer = "";
        for (int i = 0; i < words.length; i++) {
            if (words[i].length() > 4) {
                words[i] = spinner(words[i]);
            }
        }
        for (int i = 0; i < words.length; i++) {
            theAnswer += words[i];
            if (i != words.length - 1) theAnswer += " ";
        }
        return theAnswer;
    }
    public static String spinner(String theWord) {
        String[] word = theWord.split("");
        String theSpinnedWord = "";
        for (int i = 0; i < word.length / 2; i++) {
            String temp = word[i];
            word[i] = word[word.length - i - 1];
            word[word.length - i - 1] = temp;
        }
        for (String i : word) {
            theSpinnedWord += i;
        }
        return theSpinnedWord;
    }
    public static void main(String[] args) {
        //System.out.println(spinner("hi"));
        //System.out.println(spinner("helo"));
        System.out.println(spinWords("Hello how are you"));
    }
}
