#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;


void InsertionSort(int p) {
    if (p > 0) {
        InsertionSort(p - 1);
    }
    int key = a[p];
    int j = p - 1;
    while (j > -1 && a[j] > key) {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
}



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    InsertionSort(n - 1);
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}
