#include <iostream>

using namespace std;


int n;


int isPrime(int t) {
    for (int i = 2; i < t / 2 + 1; i++) {
        if (t % i == 0) {
            return 0;
        }
    }
    return 1;
}




int main() {
    cin >> n;
    int a, b;
    a = n / 2;
    b = n - a;
    while (isPrime(a) == 1 || isPrime(b) == 1) {
        a -= 1;
        b += 1;
    }
    
    cout << a << " " << b;
    return 0;
}
