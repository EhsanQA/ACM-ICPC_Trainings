#include<bits/stdc++.h>

using namespace std;

int n;

int main() {
    cin >> n;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        counter += (n - i - 1) * (i + 1);
    }
    cout << counter + n << endl;
    return 0;
}
