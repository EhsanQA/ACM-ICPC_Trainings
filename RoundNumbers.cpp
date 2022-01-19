#include <iostream>
#include <math.h>

using namespace std;

int n;

int counter(int k, int p) {
    if (p == 0) {
        int d = 0;
        while (k != 0) {
            d++;
            k /= 10;
        }
        return d;
    }
    else {
        int d = 0;
        while (k != 0) {
            if (k % 10 != 0) {
                d++;
            }
            k /= 10;
        }
        return d;
    }
    
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int d = counter(t, 0);
        int tt = t;
        cout << counter(t, 1) << endl;
        for (int j = 0; j < d; j++) {
            int r = tt % 10;
            tt /= 10;
            if (r != 0) {
                cout << r;
                for (int u = 0; u < j; u++) {
                    cout << 0;
                }
                cout << " ";
            }

        }
        cout << endl;
    }
    return 0;
}
