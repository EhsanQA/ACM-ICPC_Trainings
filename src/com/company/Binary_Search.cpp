#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f2("data.in");
ofstream g2("data.out");

int theSearch(int sortedNums[], int length, int x) {
    int left = 0;
    int right = length;
    int middle = (right + left) / 2;

    while (left <= right) {
        middle = (left + right) / 2;
        cout << middle << " ";
        if (sortedNums[middle] == x) {

            return middle;
        }
        else if (x > sortedNums[middle]) {
            left = middle + 1;
        }
        else if (x < sortedNums[middle]) {
            right = middle - 1;
        }
        else if (sortedNums[middle] != x) {
            return -1;
        }
    }

}

int main(){
    int theNums[] = {1, 3, 4, 6, 7, 12};
    cout << theSearch(theNums, 6, 7);
    return 0;
}
