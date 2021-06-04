#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Book {
    int id;
    char name[30];
    char author[30];
    long price;

} firstBook;

void printer(Book book) {
    cout << "the ID: " << book.id << "\n";
    cout << "the Author: " << book.author << "\n";
    cout << "the Name: " << book.name << "\n";
    cout << "the Price: " << book.price << "\n";
}

int main() {
    firstBook.id = 1;
    firstBook.price = 10;
    strcpy(firstBook.author, "The Best Author in the World");
    strcpy(firstBook.name, "The Best Book in the world");
    printer(firstBook);
}
