#include<bits/stdc++.h>

using namespace std;

bool valid_braces(string braces) {
    vector<char> v;
    for (char i : braces) {
      if (v.size() == 0) {
        if (i == '(' || i == '[' || i == '{') {
          v.push_back(i);
        } else {
          return false;
        }
      } else {
        if (i == '(' || i == '[' || i == '{') {
          v.push_back(i);
        } else {
          if (i == ')' && v.at(v.size() - 1) == '(') {
            v.pop_back();
          } else if (i == ']' && v.at(v.size() - 1) == '[') {
            v.pop_back();
          } else if (i == '}' && v.at(v.size() - 1) == '{') {
            v.pop_back();
          } else {
            return false;
          }
        }
      }
    }
    return true;
}
