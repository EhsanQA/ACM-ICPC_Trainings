#include <iostream>

using namespace std;

int n, k;
int can;

int main() {
    cin >> n >> k;
    int ints[n];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        ints[i] = t;
    }
    for (int i = 0; i < n; i++) {
        if (5 - ints[i] >= k) {
            can++;
        }
    }
    cout << can / 3;
    return 0;
}
