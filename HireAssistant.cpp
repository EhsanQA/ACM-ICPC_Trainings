#include<bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    int best = 0;
    int hireCount = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (best < t) {
            hireCount++;
            best = t;
        }
    }
    cout << "Best: " << best << endl;
    cout << "hireCount: " << hireCount << endl;
    return 0;
}
