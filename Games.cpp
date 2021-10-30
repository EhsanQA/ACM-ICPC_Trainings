#include <iostream>

using namespace std;

int n;
int a;

int main() {
    cin >> n;
    int cs[2 * n];
    for (int i = 0; i < 2 * n; i++) {
        int t;
        cin >> t;
        cs[i] = t;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cs[2 * i] == cs[2 * j + 1]) {
                a++;
            }

            if (cs[2 * i + 1] == cs[2 * j]){
                a++;
            }
        }
    }
    cout << a;
    return 0;
}
