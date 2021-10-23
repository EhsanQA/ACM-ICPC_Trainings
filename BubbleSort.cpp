#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                int s = a[j];
                a[j] = a[j - 1];
                a[j - 1] = s;
            }
        }
    }
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}
