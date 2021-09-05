#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a[5];

int main() {
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        sum += t;
        a[t].push_back(1);
    }
    if (sum <= 4) {
        cout << 1 << endl;
        return 0;
    }
    int ans = 0;
    ans += min(a[1].size(), a[3].size());
    int tmp = max(a[1].size(), a[3].size()) - min(a[1].size(), a[3].size());
    if (a[1].size() > a[3].size()) {
        ans += tmp / 4;
        tmp = tmp % 4;
        if (tmp != 0) {
            if (tmp <= 2 && a[2].size() > 0) {
                a[2].pop_back();
                ans += 1;
            } else if (tmp > 2 && a[2].size() > 1) {
                a[2].pop_back();
                a[2].pop_back();
                ans += 2;
            } else if (tmp > 2 && a[2].size() > 0) {
                a[2].pop_back();
                ans += 1;
            } else {
                ans += 1;
            }
        }
    } else {
        ans += tmp;    
    }
    if (a[2].size() % 2 == 0)
        ans += a[2].size() / 2;
    else 
        ans += a[2].size() / 2 + 1;
    ans += a[4].size();
    cout << ans << endl;
    return 0;
}
