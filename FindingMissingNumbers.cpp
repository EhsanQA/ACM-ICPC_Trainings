#include<bits/stdc++.h>

using namespace std;

int n;
vector<string> a;

int main() {
    // O(n)
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (a[i].at(a[i].size() - 1) == '1') {
                cout << i << endl;
                return 0;
            }
        } else {
            if (a[i].at(a[i].size() - 1) == '0') {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << "All good :)" << endl;
    return 0;
}
