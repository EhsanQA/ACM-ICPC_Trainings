#include<bits/stdc++.h>

using namespace std;

string group_by_commas(int n) {
    string s = to_string(n);
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (i % 3 == 0 && i != 0) {
            ans += ",";
            ans += s.at(s.size() - i - 1);
        } else {
            ans += s.at(s.size() - i - 1);
        }
    }
    string reversedAns = "";
    for (int i = 0; i < ans.size(); i++) {
        reversedAns += ans.at(ans.size() - i - 1);
    }
    return reversedAns;
}
