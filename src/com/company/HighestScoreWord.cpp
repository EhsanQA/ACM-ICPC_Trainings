#include <bits/stdc++.h>

using namespace std;

string highestScoringWord(const string str) {
    map<string, int> m;
    vector<string> s;
    vector<int> v;
    istringstream ss(str);
    string word;
    while (ss >> word) {
        int tmpScore = 0;
        for (char i : word) {
          int tmp = i - 'a' + 1;
          tmpScore += tmp;
        }
        m.insert({word, tmpScore});
    }
    for (pair i : m) {
        s.push_back(i.first);
        v.push_back(m.at(i.first));
    }
    int ansIndex = max_element(v.begin(), v.end()) - v.begin();
    return s.at(ansIndex);
}
