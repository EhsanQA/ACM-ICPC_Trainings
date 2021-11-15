#include<bits/stdc++.h>

using namespace std;

int n, m;
vector<int> a, b, c;

void merge() {
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }
    for (; i < n; i++)
        c.push_back(a[i]);
    for (; j < m; j++)
        c.push_back(b[j]);
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        b.push_back(t);
    }
    merge();
    for (int o = 0; o < c.size(); o++) {
        cout << c[o] << " ";
    }
    cout << endl;
    return 0;
}
