#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");

int calculator(int theYear,  double thePrice) {

    for (int i = 0; i < theYear; i++) {
        thePrice = thePrice * 8 / 10;
        cout << "after " << i + 1 << " year(s) " << "the price is: " << thePrice << "\n";
    }

    return thePrice;

}

int main() {

    int year;
    double price;
    f >> year;
    f >> price;
    price = calculator(year, price);
    cout << "the Price of the Car after " << year << " years is: " << price;
}
