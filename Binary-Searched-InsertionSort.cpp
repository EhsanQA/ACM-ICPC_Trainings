#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

int BinarySearcher(int l, int r, int k) {
    int mid = (l + r) / 2;
    if (k > a[mid - 1] && k < a[mid + 1])
        return mid;
    if (k > a[mid + 1])
        return BinarySearcher(mid, r, k);
    else
        return BinarySearcher(l, mid, k);
}

void InsertionSort() {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int index = BinarySearcher(0, i, key);
        // still bad, O(n ^ 2)
        // actually worse than normal InsertionSort
        for (int j = index + 1; j < i; j++) {
            a[j + 1] = a[j];
        }

    }
}



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }


    return 0;
}
