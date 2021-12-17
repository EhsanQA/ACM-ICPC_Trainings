#include <iostream>

using namespace std;

int n;
int r;
int c;
int ig;


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int e;
        cin >> e;
        if (e > 0) {
            r += e;
        } else {
            c++;
            if (r >= c) {
                c--;
                r--;
            } else {
                c--;
                ig++;
            }
        }
    
    }
    cout << ig;
    return 0;
}
