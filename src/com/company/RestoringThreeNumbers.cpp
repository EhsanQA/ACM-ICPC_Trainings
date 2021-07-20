#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a, b, c;
vector<int> v;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int ss[4];
    ss[0] = s1;
    ss[1] = s2;
    ss[2] = s3;
    ss[3] = s4;
    int m = 0;
    for (int i : ss) {
        if (i > m) {
            m = i;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (ss[i] != m) {
            v.push_back(ss[i]);
        }
    }

    
    b = (v.at(0) - v.at(1) + v.at(2)) / 2;
    a = v.at(0) - b;
    c = v.at(2) - b;
    cout << a << " " << b << " " << c;
    return 0;
}
