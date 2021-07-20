#include <iostream>
#include <cstdlib>

using namespace std;

int n;


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int d = abs(a - b);
        int r = d % 10;
        if (r == 0) {
            cout << d / 10 << endl;
        }
        else {
            cout << d / 10 + 1 << endl;
        }
    }
    return 0;
}
