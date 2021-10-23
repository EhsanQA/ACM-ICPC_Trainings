#include<bits/stdc++.h>

using namespace std;

int k;
int n;
vector<int> a;

int BinarySearcher(int l, int r) {
    int mid = (l + r) / 2;
    if (k == a[mid])
        return mid;
    if (k > a[mid])
        return BinarySearcher(mid, r);
    else
        return BinarySearcher(l, mid);
}


int main() {
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    cout << BinarySearcher(0, n) + 1 << endl;

    return 0;
}
