#include <bits/stdc++.h>



using namespace std;

int n, k;

int factorial(int t) {
    if (t < 2) {
        return 1;
    }
    return t * factorial(t - 1);
}

int main() {
    cin >> n >> k;
    if (k > n) {
        cout << 0;
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < k; i++) {
        ans *= n - i;
    }
    ans *= factorial(n) / (factorial(n - k) * factorial(k));
    
    cout << ans;
    return 0;
}
