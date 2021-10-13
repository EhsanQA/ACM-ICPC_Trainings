#include<bits/stdc++.h>

using namespace std;

int n, k;

vector<int> a, c, result;


int main() {
    int maximum = 0;
    a.push_back(-1);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] > maximum)
            maximum = a[i];
    }
    k = maximum;
    c.push_back(-1);
    for (int i = 0; i < k; i++)
        c.push_back(0);
    for (int i = 1; i <= n; i++)
        c[a[i]]++;
    for (int i = 1; i <= k; i++) {
        if (c[i] != -1) {
            for (int j = 0; j < c[i]; j++)
                result.push_back(i);
        }

    }
    for (int i : result)
        cout << i << " ";
    cout << endl;
    return 0;
}
