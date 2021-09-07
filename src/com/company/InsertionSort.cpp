#include<bits/stdc++.h>

using namespace std;

// the size of the data
int n;

int main() {
    // get the size of the data
    cin >> n;
    int a[n];

    // get the the data from cin
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 1; j < n; j++) {
        int key = a[j];
        // inserting a[j] into the sorted seq "a[0...j - 1]"
        int i = j - 1;
        while (i > -1 && a[i] > key) {
            a[i + 1] = a[i];
            i -= 1;
        }
        a[i + 1] = key;
    }
    // printing the sorted "a"
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}
