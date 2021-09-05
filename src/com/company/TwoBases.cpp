#include<bits/stdc++.h>

using namespace std;

int n, bx, m, by;
long long nValue, mValue;
vector<int> ns;
vector<int> ms;

int main() {
    cin >> n >> bx;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        ns.push_back(t);
    }
    cin >> m >> by;
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        ms.push_back(t);
    }
    for (int i = 0; i < n; i++)
        nValue += (int) ns.at(n - i - 1) * pow(bx, i);
    for (int i = 0; i < m; i++)
        mValue += (int) ms.at(m - i - 1) * pow(by, i);
    if (nValue > mValue)
        cout << ">" << endl;
    else if (nValue == mValue)
        cout << "=" << endl;
    else 
        cout << "<" << endl;
    return 0;
}
