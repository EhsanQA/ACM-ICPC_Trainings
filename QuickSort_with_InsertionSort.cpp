#include<bits/stdc++.h>

using namespace std;
using namespace chrono;

const int MAXN = 1000000007;

int n;
vector<int> a, diffs;

int partition(int l, int r) {
    int x = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

int randomizedPartition(int l, int r) {
    int i = rand() % (r - l + 1) + l;
    swap(a[i], a[r]);
    return partition(l, r);
}


void quickSort(int l, int r, int minSubArray) {
    if (l < r && r - l > minSubArray) {
        // int q = randomizedPartition(l, r);
        int q = partition(l, r);
        quickSort(l, q - 1, minSubArray);
        quickSort(q + 1, r, minSubArray);
    }
}

void insertionSort(int s, int e) {
    for (int i = s + 1; i <= e; i++) {
        int index = i;
        for (int j = i - 1; j >= s; j--) {
            if (a[index] < a[j]) {
                swap(a[index], a[j]);
                index--;
            } else break;
        }
    }
}

int main() {
    srand(time(0));
    cout << "Please enter the size of the array... " << endl;
    cin >> n;
    cout << endl;
    vector<int> temp(n + 1);
    generate(temp.begin(), temp.end(), rand);
    a = temp;
    cout << "Starting Experiment..." << endl;
    

    auto startControl = high_resolution_clock::now();
    quickSort(1, n, 0);
    auto stopControl = high_resolution_clock::now();
    int durationControl = duration_cast<microseconds>(stopControl - startControl).count();

    int bestKFinder;

    for (int k = 1; k <= n; k++) {
        a = temp;
        cout << "Testing for k = " << k << " ..." << endl;
        auto startExperiment = high_resolution_clock::now();
        quickSort(1, n, k);
        insertionSort(1, n);
        auto stopExperiment = high_resolution_clock::now();
        int durationExperiment = duration_cast<microseconds>(stopExperiment - startExperiment).count();

        int difference = durationControl - durationExperiment;
        diffs.push_back(difference);
        cout << "The differnce between Experiment and Control for k = " << k << " is " <<
            difference << " microseconds" << endl;
        cout << endl;
        if (difference < 0 && k > 100)
            break;
    }
    cout << endl;
    cout << "The best case happens if k = " << max_element(diffs.begin(), diffs.end()) - diffs.begin() + 1;
    cout << endl;
    
}
