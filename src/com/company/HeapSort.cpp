#include<bits/stdc++.h>

using namespace std;

int n, heapSize;
vector<int> a;

int left(int i) {
    return 2 * i;
}

int right(int i) {
    return 2 * i + 1;
}



void maxHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest;
    if (l <= heapSize && a[l] > a[i])
        largest = l;
    else
        largest = i;
    if (r <= heapSize && a[r] > a[largest])
        largest = r;
    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        maxHeapify(largest);
    }
}


int main() {
    cin >> n;
    a.push_back(-1);
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    heapSize = n;

    for (int i = n; i > 0; i--)
        maxHeapify(i);

    for (int i = n; i > 1; i--) {
        int temp = a[1];
        a[1] = a[i];
        a[i] = temp;
        heapSize--;
        maxHeapify(1);

    }
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
