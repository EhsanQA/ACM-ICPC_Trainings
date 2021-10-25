#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10010;

int combCount[MAXN];

int main() {
    long n;
    while (cin >> n) {
        if (n == 0) 
            break;
        if (n == 1) {
            long tempTemp;
            for (long i = 0; i < 5; i++) {
                cin >> tempTemp;
            }
            cout << n << endl;
        } else {
            vector<set<long>> v;
            
            for (long i = 0; i < n; i++) {
                combCount[i] = 1;
            }
            for (long i = 0; i < n; i++) {
                set<long> tSet = {};
                for (long j = 0; j < 5; j++) {
                    long t;
                    cin >> t;
                    tSet.insert(t);
                }
                v.push_back(tSet);
            }
            sort(v.begin(), v.end());
            set<long> tmp = v.at(0);
            long tmpCount = 1;
            for (long i = 0; i < n; i++) {
                if (v.at(i) != tmp) {
                    combCount[i - 1] = tmpCount;
                    tmpCount = 1;
                    tmp = v.at(i);
                } else if (i == n - 1) {
                    tmpCount++;
                    combCount[i] = tmpCount;
                } else if (i != 0) {
                    tmpCount++;
                }
            }
            // for (int i : combCount) {
            //     if (i != 0)
            //         cout << i << endl;
            // }
            if (*max_element(combCount, combCount + n) == 1) {
                cout << n << endl;
            } else {
                int ansTmp = 0;
                for (int i : combCount) {
                    if (i == *max_element(combCount, combCount + n))
                        ansTmp += i;
                }
                cout << ansTmp << endl;
            }
        }
    }

    return 0;
}
