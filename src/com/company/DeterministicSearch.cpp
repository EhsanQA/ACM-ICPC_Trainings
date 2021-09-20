#include<bits/stdc++.h>

using namespace std;

int n, key;

int main() {
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] == key) {
            cout << i + 1 << endl;
            return 0;
        }
    cout << "NOT FOUND" << endl;
    return 0;
}
