#include<bits/stdc++.h>

using namespace std;

int x, n;
vector<int> a;


int BinarySearcher(int l, int r, int k) {
    int mid = (l + r) / 2;
    if (r - l == 1 && k != a[mid])
        return -1;
    if (k == a[mid])
        return mid;
    if (k > a[mid])
        return BinarySearcher(mid, r, k);
    else
        return BinarySearcher(l, mid, k);
}


int main() {
    cin >> x >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        int c = x - a[i];
        int q = BinarySearcher(0, n, c);
        if (q != -1) {
            cout << "There are numbers that satisfy the request" << endl;
            return 0;
        }
    }
    cout << "There aren't such two numbers" << endl;
    return 0;
}
