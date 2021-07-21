#include <iostream>

using namespace std;

int n, b;


int main() {
    cin >> n;
    int w[n];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        w[i] = t;
    }
    int m = w[0];
    for (int i : w) {
        if (i > m) {
            m = i;
        }
    }
    for (int i : w) {
        b += m - i;
    }
    cout << b;
    return 0;
}
