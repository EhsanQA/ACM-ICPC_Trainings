#include <iostream>
#include <bits/stdc++.h>

using namespace std;

set<char> s;

int main() {
    char c;
    cin >> c;
    char t;
    cin >> t;
    while (t != '}') {
        s.insert(t);
        cin >> t;
        if (t == '}') {
            break;
        }
        cin >> t;
    }

    cout << s.size();
    return 0;
}
