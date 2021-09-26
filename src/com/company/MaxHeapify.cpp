#include<bits/stdc++.h>

using namespace std;

int heapSize;
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
    if (l < heapSize && a[l] > a[i])
        largest = l;
    else
        largest = i;
    if (r < heapSize && a[r] > a[largest])
        largest = r;
    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        maxHeapify(largest);
    }
}

int main() {
    cin >> heapSize;
    a.push_back(-1);
    for (int i = 1; i <= heapSize; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    // for (int i = 1; i <= heapSize / 2; i++)
    //     maxHeapify(i);
    maxHeapify(1);
    for (int i = 1; i <= heapSize; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
