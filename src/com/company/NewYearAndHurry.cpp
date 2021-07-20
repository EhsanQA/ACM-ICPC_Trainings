#include <iostream>

using namespace std;

int n;
int k;

int main() {
    cin >> n >> k;
    int r = 240 - k;
    int s = 0;
    int i = 1;
    while (r > 0 && s < n) {
        r -= i * 5;
        if (r < 0) {
            break;
        }
        s++;
        i++;
    }
    cout << s;
    
    return 0;
}
