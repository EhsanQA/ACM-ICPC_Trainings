#include<bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    int ad[n], bd[n];
    for (int i = 0; i < n; i++)
        cin >> ad[i];
    for (int i = 0; i < n; i++)
        cin >> bd[i];
    int a[n + 1], b[n + 1], ans[n + 1];
    a[n] = 0;
    b[n] = 0;
    for (int i = 0; i < n; i++) {
        a[n - i - 1] = ad[i];
        b[n - i - 1] = bd[i];
    }
    int cin_ = 0;
    for (int i = 0; i < n + 1; i++) {
        ans[i] = (a[i] + b[i] + cin_) % 2;
        if (a[i] + b[i] + cin_ > 1)
            cin_ = 1;
        else cin_ = 0;
    }
    for (int i = n; i >= 0; i--)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}
