#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> v;
vector<int> diffs;

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int p;
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    if (n == m) {
        cout << v.at(v.size() - 1) - v.at(0) << endl;
        return 0;
    }
    for (int i = 0; i < m - n + 1; i++) {
        diffs.push_back(v.at(i + n - 1) - v.at(i));
    }
    cout << *min_element(diffs.begin(), diffs.end()) << endl;
    return 0;
}
