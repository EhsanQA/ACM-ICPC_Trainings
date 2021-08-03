#include <bits/stdc++.h>
#include <cmath>

using namespace std;

const int MAX = 100000007;

int t;

int fib(int n) {
    double phi = (1 + sqrt(5)) / 2;
    double tmp = phi;
    for (int i = 0; i < n - 1; i++) {
        tmp *= phi;
        while (tmp >= MAX) {
            tmp -= MAX;
        }
    }
    long long ans = round(tmp / sqrt(5));
    return ans;
}
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << fib(n) % MAX << endl;
    }
    return 0;
}
