#include <iostream>

using namespace std;

int t;

int minFinder(int a[], int size) {
    int min = a[0];
    int minIndex = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int maxFinder(int a[], int size) {
    int max = a[0];
    int maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}


int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int j = 0; j < n; j++) {
            int element;
            cin >> element;
            a[j] = element;
        }
        for (int j = 0; j < n; j++) {
            int element;
            cin >> element;
            b[j] = element;
        }
        for (int l = 0; l < k; l++) {
            int ai = minFinder(a, n);
            int bi = maxFinder(b, n);
            if (a[ai] < b[bi]) {
                int tmp = a[ai];
                a[ai] = b[bi];
                b[bi] = tmp;
            }
            
        }
        int sum = 0;
        for (int i : a) {
            sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
