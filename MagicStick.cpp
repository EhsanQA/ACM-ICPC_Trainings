#include<bits/stdc++.h>

using namespace std;

long long f(long long x, long long y) {
    if ((y > x) && (x % 2 == 0)) {
        return 3 * x / 2;
    } else {
        return x - 1;
    }
}


int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long x, y;
        cin >> x >> y;
        if (x == 0 || y == 0) cout << "NO" << endl; else
        if (x == y) cout << "YES" << endl; else
        if ((x < 1) || (y < 1)) cout << "NO" << endl; else {
            if (y < x) cout << "YES" << endl; else {
                long long tmp = x;
                while (true) {
                    x = f(x, y);
                    if (x >= y && x >= 1) {
                        cout << "YES" << endl;
                        break;
                    } else {
                        if (x < 1 || x == tmp) {
                            cout << "NO" << endl;
                            break;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
