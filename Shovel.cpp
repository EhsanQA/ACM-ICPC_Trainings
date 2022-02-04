#include <iostream>

using namespace std;

int k, r;


int main() {
    cin >> k >> r;
    int i = 1;
    int count = 0;
    while ((k * i) % 10 != r && (k * i) % 10 != 0) {
        i++;
        count++;
    }
    cout << count + 1;
    return 0;
}
