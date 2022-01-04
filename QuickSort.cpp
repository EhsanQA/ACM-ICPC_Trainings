#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

// worst case Theta(n ^ 2);

int partition(int l, int r) {
    int x = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= x) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    i++;
    int t = a[i];
    a[i] = a[r];
    a[r] = t;
    return i;
}


void quickSort(int l, int r) {
    if (l < r) {
        int q = partition(l, r);
        quickSort(l, q - 1);
        quickSort(q + 1, r);
    }
}

int main() {
    cin >> n;
    a.push_back(-1);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    quickSort(1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
