#include <bits/stdc++.h>
#include <algorithm>
#include <iterator>

using namespace std;


int n, count;
vector<int> v;


int main() {
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s[i] = t;
    }
    int can = 1;
    while (can == 1) {
        can = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (s[j] == 2) {
                        for (int k = 0; k < n; k++) {
                            if (s[k] == 3) {
                                can = 1;
                            }
                        }
                    }
                }
            }
        }
        if (can == 1) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < n; j++) {
                    if (s[j] == i + 1) {
                        v.push_back(j + 1);
                        s[j] = -1;
                        break;
                    }
                }
            }
        }
        // cout << "AFTER ONE OPERATION: " << endl;
        // for (int i : s) {
        //     cout << i << " ";
        // }
        // cout << endl;
        // cout << "AND THE ANSWERS AFTER ONE OPERATION: " << endl;
        // for (int i : v) {
        //     cout << i;
        // }
        // cout << endl;
    }
    cout << v.size() / 3 << endl;
    for (int i = 0; i < v.size() / 3; i++) {
        cout << v.at(3 * i) << " ";
        cout << v.at(3 * i + 1) << " ";
        cout << v.at(3 * i + 2) << " ";
        cout << endl;
    }
    return 0;
}
