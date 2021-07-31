#include <bits/stdc++.h>

using namespace std;

int n, m;
bool colored = false;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n * m; i++) {
        char t;
        cin >> t;
        if (t == 'C' || t == 'M' || t == 'Y') {
            colored = true;
            cout << "#Color" << endl;
            return 0;
        }
    }
    cout << "#Black&White" << endl;
    return 0;
}
