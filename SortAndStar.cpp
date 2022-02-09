#include<bits/stdc++.h>

using namespace std;

string twoSort(vector<string> s) {
    string ans;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.at(0).size(); i++) {
        ans += s.at(0).at(i);
        if (i != s.at(0).size() - 1)
            ans += "***";
    }
    return ans;
}
