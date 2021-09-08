#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a;

void merge(int l, int mid, int r) {
    vector<int> merged = {};
    int i = l;
    int j = mid + 1;
    while (i <= mid && j <= r) {
        if (a[i] < a[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
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
}

void mergeSort(int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(l, mid);
        mergeSort(mid + 1, r);
        merge(l, mid, r);
    }
}



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    mergeSort(0, n - 1);
    for (int i : a)
        cout << i << " ";
    cout << endl;
    
    return 0;
}
