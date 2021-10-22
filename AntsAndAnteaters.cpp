#include <bits/stdc++.h>

using namespace std;

int t;

int digitCounter(int k) {
    int count = 0;
    while (k != 0) {
        if (k % 10 != 0)
            count++;
        k /= 10;
    }
    return count;
}

int meetingCalculator(int digit) {
    if (digit == 2)
        return 1;
    return digit + (digit * (digit - 3) / 2);
}


int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        int r, c;
        cin >> r >> c;
        int a[r][c];
        string s[r];
        int count = 0;
        for (int i = 0; i < r; i++) {
            cin >> s[i];
        }
        int b[r][c];
        copy(&a[0][0], &a[0][0] + r*c,&b[0][0]);
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < c; k++) {
                if (s[j].at(k) == 'R') {
                    a[j][k] = 1;
                } else if (s[j].at(k) == 'D') {
                    a[j][k] = 10;
                } else if (s[j].at(k) == 'L') {
                    a[j][k] = 100;
                } else if (s[j].at(k) == 'U') {
                    a[j][k] = 1000;
                } else if (s[j].at(k) == '#') {
                    a[j][k] = -10;
                } else if (s[j].at(k) == '-') {
                    a[j][k] = 0;
                } 
            }
        }
        bool again = true;
        while (again) {
            // cout << "a: " << endl;
            // for (int j = 0; j < r; j++) {
            //     for (int k = 0; k < c; k++) {
            //         cout << a[j][k];
            //     }
            //     cout << endl;
            // }
            
            copy(&a[0][0], &a[0][0] + r*c,&b[0][0]);
            again = false;
            for (int j = 0; j < r; j++) {
                for (int k = 0; k < c; k++) {
                    if (a[j][k] > 0)
                        again = true;
                }
            }
            for (int j = 0; j < r; j++) {
                for (int k = 0; k < c; k++) {
                    if (a[j][k] == 1) {
                        b[j][k] -= 1;
                        if (k != c - 1) {
                            if (a[j][k + 1] != -10)
                                b[j][k + 1] += 1;
                        }
                    } else if (a[j][k] == 10) {
                        b[j][k] -= 10;
                        if (j != r - 1) {
                            if (a[j + 1][k] != -10)
                                b[j + 1][k] += 10;
                        }
                    } else if (a[j][k] == 100) {
                        b[j][k] -= 100;
                        if (k != 0) {
                            if (a[j][k - 1] != -10)
                                b[j][k - 1] += 100;
                        }
                    } else if (a[j][k] == 1000) {
                        b[j][k] -= 1000;
                        if (j != 0) {
                            if (a[j - 1][k] != -10)
                                b[j - 1][k] += 1000;
                        }
                    } else if (a[j][k] > 0) {
                        int numberOfAnts = digitCounter(a[j][k]);
                        // cout << "NUMBER OF ANTS: " << numberOfAnts << endl;
                        count += meetingCalculator(numberOfAnts);
                        // cout << "TOTAL: " << count << endl;
                        int popTmp = a[j][k];
                        for (int o = 0; o < numberOfAnts; o++) {
                            if (popTmp % 10 == 1) {
                                b[j][k] -= 1;
                                popTmp -= 1;
                                if (k != c - 1) {
                                    if (a[j][k + 1] != -10)
                                        b[j][k + 1] += 1;
                                }
                            } else if (popTmp % 100 == 10) {
                                b[j][k] -= 10;
                                popTmp -= 10;
                                if (j != r - 1) {
                                    if (a[j + 1][k] != -10)
                                        b[j + 1][k] += 10;
                                }
                            } else if (popTmp % 1000 == 100) {
                                b[j][k] -= 100;
                                popTmp -= 100;
                                if (k != 0) {
                                    if (a[j][k - 1] != -10)
                                        b[j][k - 1] += 100;
                                }
                            } else if (popTmp % 10000 == 1000) {
                                b[j][k] -= 1000;
                                popTmp -= 1000;
                                if (j != 0) {
                                    if (a[j - 1][k] != -10)
                                        b[j - 1][k] += 1000;
                                }
                            }
                        }
                    }
                    // cout << "b: " << endl;
                    // for (int j = 0; j < r; j++) {
                    //     for (int k = 0; k < c; k++) {
                    //         cout << b[j][k];
                    //     }
                    //     cout << endl;
                    // }
                }
            }
            copy(&b[0][0], &b[0][0] + r*c,&a[0][0]);
        }
        cout << count << endl;
    }
    return 0;
}
