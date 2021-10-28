#include<bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    vector<int> a(n, 0);
    vector<int> dp(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    dp[0] = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            dp[i] = dp[i - 1] + 1;
    }
    cout << *max_element(dp.begin(), dp.end()) + 1 << endl;
    for (auto i : dp)
        cout << i << " ";
    cout << endl;
    return 0;
}
