#include<bits/stdc++.h>

using namespace std;

int x, n;
vector<int> a;

int main() {
    // O(nlogn)
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    int y = 0;
    for (int i = 0; i < n; i++)
        y += a[i] * pow(x, i);
    cout << y << endl;
    return 0;
}
