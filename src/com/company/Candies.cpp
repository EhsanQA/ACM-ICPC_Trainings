#include <iostream>

using namespace std;

int t;

int main() {
    cin >> t;
    int ints[t];
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        ints[i] = n;
    }
    for (int n : ints) {
        if (n % 2 == 1) {
            cout << (n - 1) / 2 << endl;
        }
        else {
            cout << n / 2 - 1 << endl;
        }
    }
    
    return 0;
}
