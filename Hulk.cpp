#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;
    cout << "I hate ";
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 1) {
            cout << "that I hate ";
        }
        else {
            cout << "that I love ";
        }
    }
    cout << "it";
    return 0;
}
