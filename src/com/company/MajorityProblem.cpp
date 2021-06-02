#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f4("data.in");
ofstream g4("data.out");

int theNums[] = {2, 2, 2, 5, 1, 2, 1, 5, 2, 2};
int lenOfTheNums = 10;
int theNum = theNums[lenOfTheNums / 2];


int isMajority() {
    int left = 0;
    int right = lenOfTheNums;
    int mid = (left + right) / 2;
    int resultFirst = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (theNums[mid] == theNum) {
            resultFirst = mid;
            right = mid - 1;
        }
        else if (theNums[mid] > theNum) {
            right = mid - 1;
        }
        else if (theNums[mid] < theNum) {
            left = mid + 1;
        }
    }
    left = 0;
    right = lenOfTheNums;
    mid = (left + right) / 2;
    int resultRight = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (theNums[mid] == theNum) {
            resultRight = mid;
            left = mid + 1;
        }
        else if (theNums[mid] > theNum) {
            right = mid - 1;
        }
        else if (theNums[mid] < theNum) {
            left = mid + 1;
        }
    }
    if (resultRight - resultFirst + 1 > lenOfTheNums / 2) {
        return theNums[lenOfTheNums / 2];
    }
    return -1;

}



int main(){


    sort(theNums + 0, theNums + 10);
    //for (auto i : theNums) {
      //  cout << i << " ";
    //}
    cout << "---- and the answer is:::  " << isMajority();

    return 0;
}

