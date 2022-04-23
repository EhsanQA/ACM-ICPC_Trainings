#include <iostream>
#include <algorithm>

using namespace std;

int n;


int main() {
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        s[i] = t;
    }
    int max = n - 1;
    int min = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] >= s[max]) {
            max = i;
        }
    }

    for (int i = 0; i < n; i++) {
        if (s[i] <= s[min]) {
            min = i;
        }
    }
    
    if (max > min) {
        cout << max + n - min - 2;
    } else {
        cout << max + n - min - 1;
    }
    
    return 0;
}
