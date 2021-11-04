#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;


// has bugs
int merge(int l, int mid, int r) {
    vector<int> merged = {};
    int tmpInversionCount = 0;
    int i = l;
    int j = mid + 1;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            tmpInversionCount += mid - l + 2 - i;
            merged.push_back(a[j]);
            j++;
        }
    }
    for (; i <= mid; i++)
        merged.push_back(a[i]);
    for (; j <= r; j++)
        merged.push_back(a[j]);
    // for (int o : merged)
    //     cout << o << " ";
    // cout << endl;
    for (int k = l; k <= r; k++) 
        a[k] = merged[k - l];
    return tmpInversionCount;
}

int mergeSort(int l, int r) {
    int inversionCount = 0;
    if (l < r) {
        int mid = (l + r) / 2;
        int left = mergeSort(l, mid);
        int right = mergeSort(mid + 1, r);
        inversionCount = merge(l, mid, r) + left + right;
    }
    return inversionCount;
}



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    cout << mergeSort(0, n - 1) << endl;
    // for (int i : a)
    //     cout << i << " ";
    // cout << endl;
    return 0;
}
