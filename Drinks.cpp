#include <iostream>

using namespace std;

int n;
int sum;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    double m = sum / (n * 1.0);
    cout.precision(12);
    cout << fixed << m;
    return 0;
}
