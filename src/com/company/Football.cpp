#include<bits/stdc++.h>

using namespace std;

string s;

int main() {
    cin >> s;
    int counter = 0;
    char t = s.at(0);
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == t) {
            counter++;
            if (counter > 6) {
                cout << "YES" << endl;
                return 0;
            }
        } else {
            counter = 1;
            t = s.at(i);
        }
    }
    cout << "NO" << endl;
    return 0;
}
