#include<bits/stdc++.h>

using namespace std;

int n, m, a, b;
int ans;

int main() {
    cin >> n >> m >> a >> b;
    if ((double) b / m <= (double) a) {
        ans += (n / m) * b;
        if ((n % m) * a > b)
            ans += b;
        else
            ans += (n % m) * a;
    } else ans += n * a;
    cout << ans << endl;
    return 0;
}
