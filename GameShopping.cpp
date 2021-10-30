#include <bits/stdc++.h>

using namespace std;

int n, m, ci, ai, aCount;


int main() {
    cin >> n >> m;
    int c[n];
    int a[m];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (ci = 0; ci < n; ci++) {
        // cout << "TESTING: " << endl;
        // cout << "THE A: " << a[ai] << endl;
        // cout << "THE C: " << c[ci] << endl;
        if (a[ai] >= c[ci]) {
            ai++;
            aCount++;
        }
        if (ai == m) {
            break;
        }
    }
    cout << aCount;
    return 0;
}
