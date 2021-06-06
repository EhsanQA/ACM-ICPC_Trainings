package com.company;

import java.util.LinkedList;

public class PatientFileCase {
    String name;
    int age;
    char gender; // f for female and m for male
    int height;
    String address;
    String job;
    LinkedList<String> symptoms;
    LinkedList<String> drugs = new LinkedList<String>();

    public PatientFileCase(String name, int age, char gender, int height,
                           String address, String job, LinkedList<String> symptoms) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.height = height;
        this.address = address;
        this.job = job;
        this.symptoms = symptoms;

    }

    public String toString() {
        String theString = "";
        theString += "name: " + this.name + "\n" + "gender: " + this.gender +
                "\n" + "age: " + this.age +
                "\n" + "height: " + this.height + "\n" + "job: " + this.job +
                "\n" + "address: " + this.address + "\n" + "the Drugs: " + "\n";

        theString += this.theDrugs();
        return theString + "###########";
    }

    public String theDrugs() {
        String drugs = "";
        for (String drug : this.drugs) {
            drugs += drug + "\n";
        }
        return drugs;
    }

    public static void main(String[] args) {
        LinkedList<String> tempSymptoms = new LinkedList<>();
        tempSymptoms.add("headache");
        PatientFileCase case1 = new PatientFileCase("Dexter", 24, 'm', 175,
                "Miami", "Cop", tempSymptoms);
        case1.drugs.add("Asethaminophin"); // I can't spell -_-
        System.out.println(case1); // printing all attributes of the patient
        System.out.println(case1.theDrugs()); // printing all drugs given by the doctor
    }


}
