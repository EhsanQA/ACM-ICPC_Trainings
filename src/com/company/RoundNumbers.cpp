#include <iostream>
#include <math.h>

using namespace std;

int count;


int nonZeroCounter(int n) {
    int nonZeroCount = 0;
    while (n != 0) {
        if ((n % 10) > 0) {
            nonZeroCount++;
        }
        n = n / 10;
    }
    return nonZeroCount;
}

int zeroCounter(int n) {
    int zeroCounter = 0;
    while (n != 0) {
        if ((n % 10) == 0) {
            zeroCounter++;
        }
        n = n / 10;
    }
    return zeroCounter;
}

int biggestDigit(int n) {
    int d = 0;
    while (n != 0) {
        if ((n % 10) > 0) {
            d = n % 10;
        }
        n = n / 10;
    }
    return d;
}

void restPrinter(int n) {
    int big = biggestDigit(n) * (pow(10, zeroCounter(n) + nonZeroCounter(n) - 1));
    n -= big;
    while (n != 0) {
        if ((n % 10) > 0) {
            cout << n % 10 << " ";
        }
        n = n / 10;
    }
    cout << "\n";
}

int main() {
    cin >> count;
    int inputs[count];
    for (int i = 0; i < count; i++) {
        cin >> inputs[i];
    }
    for (int i = 0; i < count; i++) {
        int tmp = inputs[i];
        int nonZeroCount = nonZeroCounter(tmp);
        int zeroCount = zeroCounter(tmp);
        cout << nonZeroCount << "\n";
        cout << biggestDigit(tmp);
        for (int j = 0; j < zeroCount + nonZeroCount - 1; j++) {
            cout << 0;
        }
        cout << " ";
        restPrinter(tmp);
    }
    return 0;
}
