#include<bits/stdc++.h>

using namespace std;

int n, key, cand;

int main() {
    cin >> n >> key;
    int a[n];
    vector<int> b;
    int t = n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b.push_back(1);
    }
    while (t > 0) {
        cand = rand() % n;
        if (a[cand] == key)
            break;
        else
            if (a[cand] != -1) {
                t--;
                a[cand] = -1;
            }
    }
    if (t == 0)
        cout << "NOT FOUND" << endl;
    else
        cout << cand + 1 << endl;   
    return 0;
}
