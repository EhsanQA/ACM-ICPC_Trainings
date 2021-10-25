#include <bits/stdc++.h>

using namespace std;

int t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int max;
        if (a > b && a > c) {
            max = a;
        } else if (b > c) {
            max = b;
        } else {
            max = c;
        }
        int diff = max - a + max - b + max - c;
        if (diff > n) {
            cout << "NO" << endl;
        } else if (diff == n) {
            cout << "YES" << endl;
        } else {
            n -= diff;
            if (n % 3 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
