#include<bits/stdc++.h>

using namespace std;

int t;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int notAns;
        map<int, int> m;
        vector<int> v;
        for (int j = 0; j < n; j++) {
            int ind;
            cin >> ind;
            v.push_back(ind);
            if (m.count(ind) > 0) {
                notAns = ind;
            } else {
                m.insert({ind, 1});
            }

        }
        for (int j = 0; j < n; j++) {
            if (v.at(j) != notAns) {
                cout << j + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
