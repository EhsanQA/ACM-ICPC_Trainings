#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;

int cal(int ints[], int size) {
    int i = 0;
    int j = 1;
    if (size == 1) {
        return 1;
    }
    while (i != size - 1) {
        if (ints[i] == ints[j]) {
            j++;
        }
        else if (ints[i] != ints[j]) {
            if (ints[j] - ints[i] == 1) {
                i = j;
                j = i + 1;
            } else {
                return 0;
            }
        }
        if (j > size - 1) {
            return 1;
        }
    }
    return 1;
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int ints[k];
        for (int j = 0; j < k; j++) {
            int t;
            cin >> t;
            ints[j] = t;
        }
        sort(ints, ints + k);
        if (cal(ints, k) == 1) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
