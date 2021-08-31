#include<bits/stdc++.h>

using namespace std;

int c;
int d;

int main() {
    while (true) {
        cin >> c >> d;
        if (c == 0 && d == 0) {
            break;
        }
        vector<int> v;
        int cost = 0;
        v.push_back(c * 30 + d * 40);
        v.push_back(c * 35 + d * 30);
        v.push_back(c * 40 + d * 20);
        cout << *min_element(v.begin(), v.end()) << endl;
    }
    return 0;
}
