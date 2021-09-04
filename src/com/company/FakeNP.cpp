#include<bits/stdc++.h>

using namespace std;

int r, l;

int main() {
    cin >> l >> r;
    if (r - l > 3)
        cout << 2 << endl;
    else if (r - l == 3) {
        int threeCount = 0;
        int twoCount = 0;
        for (int i = l; i <= r; i++) {
            if (i % 2 == 0) {
                twoCount++;
            }
            if (i % 3 == 0) {
                threeCount++;
            }
        }
        if (twoCount > threeCount)
            cout << 2 << endl;
        else 
            cout << 3 << endl;
    }
    else if (r - l == 2)
        cout << 2 << endl;
    else if (r - l == 1)
        cout << 2 << endl;
    else
        cout << r << endl;
    return 0;
}
