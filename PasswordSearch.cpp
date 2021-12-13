#include <bits/stdc++.h>

using namespace std;

int n;


int main() {
    while (cin >> n) {
        string s;
        cin >> s;
        string subs[s.size() - n + 1];
        int subsCount[s.size() - n + 1];
        for (int i = 0; i < s.size() - n + 1; i++) {
            subs[i] = s.substr(i, n);
        }
        sort(subs, subs + s.size() - n + 1);
        for (int i = 0; i < s.size() - n + 1; i++) {
            subsCount[i] = 0;
        }
        // for (string i : subs) {
        //     cout << i << endl;
        // }
        string tmp = subs[0];
        int tmpCount = 1;
        for (int i = 0; i < s.size() - n + 1; i++) {
            if (tmp != subs[i]) {
                subsCount[i - 1] = tmpCount;
                tmpCount = 0;
                tmp = subs[i];
            } else {
                tmpCount++;
            }
        }
        // for (int i = 0; i < s.size() - n + 1; i++) {
        //     cout << subs[i] << " COUNT: " << subsCount[i] << endl;
        // }
        cout << subs[distance(subsCount, max_element(subsCount, subsCount + s.size() - n + 1))] << endl;
    }
    return 0;
}
