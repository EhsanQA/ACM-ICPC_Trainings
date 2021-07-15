#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> v;
int size;
int amazingCount = 0;

int main() {
    cin >> size;
    int first;
    cin >> first;
    v.push_back(first);
    for (int i = 0; i < size - 1; i++) {
        int tmp;
        cin >> tmp;
        if (*max_element(v.begin(), v.end()) < tmp) {
            amazingCount++;
        }
        else if (*min_element(v.begin(), v.end()) > tmp) {
            amazingCount++;
        }
        v.push_back(tmp);
    }
    cout << amazingCount;
    return 0;
}
