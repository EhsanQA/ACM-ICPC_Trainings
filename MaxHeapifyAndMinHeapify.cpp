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

void maxHeapifyWithoutRecursion(int i) {
    while (true) {
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
            i = largest
        } else {
            return;
        }
    }
}

void minHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int smallest;
    if (l < heapSize && a[l] < a[i])
        smallest = l;
    else
        smallest = i;
    if (r < heapSize && a[r] < a[smallest])
        smallest = r;
    if (smallest != i) {
        int temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;
        minHeapify(smallest);
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
    minHeapify(1);
    for (int i = 1; i <= heapSize; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
