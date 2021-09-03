#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> sizes;
map<int, vector<int>> mp;

int main() {
    cin >> n >> m;
    if (m < n) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
        mp.insert({i, {1}});
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        if (t <= n)
            mp.at(t).push_back(1);
    }
    for (pair<int, vector<int>> p : mp) 
        sizes.push_back(p.second.size());
    cout << *min_element(sizes.begin(), sizes.end()) - 1 << endl;;
    return 0;
}
