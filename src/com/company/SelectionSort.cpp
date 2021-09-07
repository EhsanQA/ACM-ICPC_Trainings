#include<bits/stdc++.h>

using namespace std;
int n;

int main() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        int t = a[i];
        int tIndex = min_element(a + i, a + n) - a;
        a[i] = *min_element(a + i, a + n);
        a[tIndex] = t;
    }
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}
