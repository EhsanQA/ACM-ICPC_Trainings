#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f2("data.in");
ofstream g2("data.out");

int theNums[] = {-1, 2, 3, 5, 2, 8, 15, 2, 8, -20};
int lenOfTheNums = 10;

int badSort() {
    for (int i = 0; i < lenOfTheNums; i++) {
        for (int j = i + 1; j < lenOfTheNums; j++){
            if (theNums[i] < theNums[j]) {
                swap(theNums[i], theNums[j]);
            }
        }
    }
}



int main(){

    badSort();
    for (auto i : theNums) {
        cout << i << " ";
    }
    return 0;
}
