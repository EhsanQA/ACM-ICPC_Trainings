#include<bits/stdc++.h>

using namespace std;

int solve(int x, int y) {
    int counter = 0;
    map<int, int> m;
    m.insert({0, 0});
    m.insert({1, 1});
    m.insert({6, 9});
    m.insert({8, 8});
    m.insert({9, 6});
    for (int i = x; i < y; i++) {
        string stringedN = to_string(i);
        string reversedN = "";
        for (int j = stringedN.size() - 1; j >= 0; j--) {
            if (m.count((int) stringedN.at(j) - '0') > 0) {
                reversedN += to_string(m.at((int) stringedN.at(j) - '0'));
            } else {
              break;
            }
        }
        if (stringedN == reversedN)
            counter++;
    }
    return counter;
}
