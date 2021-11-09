#include<bits/stdc++.h>

using namespace std;

int t;

int main() {
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n, m;
        cin >> n >> m;
        cout << "W";
        for (int i = 1; i < m; i++)
            cout << "B";
        cout << endl;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << "B";
            cout << endl;
        }
    }
    return 0;
}
