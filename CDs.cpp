#include <bits/stdc++.h>

using namespace std;


int main() {
    while (true) {
        long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        set<long> s;
        for (long i = 0; i < a + b; i++) {
            long t;
            cin >> t;
            s.insert(t);
        }
        cout << a + b - s.size() << endl;
    }
    return 0;
}
