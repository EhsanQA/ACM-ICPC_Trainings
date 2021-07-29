#include <bits/stdc++.h>
#include <string>

using namespace std;

const long MAXN = 1010;
long t;
vector<long> ans;
long a[MAXN][MAXN];

int main() {
    cin >> t;
    for (long p = 0; p < t; p++) {
        vector<long> v;
        long n;
        cin >> n;
        long d = 0;
        for (long i = 0; i < n; i++) {
            string inString;
            cin >> inString;
            for (long j = 0; j < n; j++) {
                a[i][j] = long(inString.at(j) - '0');
            }
        }

        // cout << "TEST TEST GO AWAY: " << endl;
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << a[i][j];
        //     }
        //     cout << endl;
        // }


        long x = 0;
        long y = 0;
        for (long i = 0; i < n / 2; i++) {
            for (long j = 0; j < n; j++) {
                x += a[j][i];
            }
        }
        for (long i = n / 2; i < n; i++) {
            for (long j = 0; j < n; j++) {
                y += a[j][i];
            }
        }

        d = x - y;
        if (d == 0) {
            ans.push_back(0);
        }
        if (d != 0) {
            for (long i = 0; i < n; i++) {
                long cDif = 0;
                for (long j = 0; j < n / 2; j++) {
                    cDif += a[i][j] - a[i][n - j - 1];
                }
                if (abs(d - 2 * cDif) < abs(d)) {
                    v.push_back(abs(d - 2 * cDif));
                }
            }
        }
        long min = d;
        if (v.size() != 0) {
            min = v.at(0);
            for (long i : v) {
                if (i < min) {
                    min = i;
                }
            }
        }
        if (d != 0) {
            ans.push_back(min);
        }   
    }
    for (long i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1) {
            cout << abs(ans.at(i));
        } else {
            cout << abs(ans.at(i)) << endl;
        }
    }
    return 0;
}

