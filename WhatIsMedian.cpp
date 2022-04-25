#include <bits/stdc++.h>

using namespace std;

vector<long> v;

int main() {
    long a;
    while (cin >> a) {
        v.push_back(a);
        sort(v.begin(), v.end());
        if (v.size() % 2 == 1) {
            cout << v.at(v.size() / 2) << endl;
        } else {
            cout << (v.at(v.size() / 2 - 1) + v.at(v.size() / 2)) / 2 << endl;
        }
    }
    return 0;
}
