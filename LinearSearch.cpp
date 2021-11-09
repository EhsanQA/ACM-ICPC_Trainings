#include<bits/stdc++.h>

using namespace std;

int v;
vector<int> a;

int main() {
    cin >> v;
    int ai;
    while (cin >> ai) {
        a.push_back(ai);
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == v)
            cout << i + 1 << endl;
    }
    return 0;
}
