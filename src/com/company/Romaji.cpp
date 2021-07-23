#include <bits/stdc++.h>

using namespace std;

string s;

int main() {
    cin >> s;
    int can = 1;
    int isVowel = 0;
    if (s.at(0) == 'a' || s.at(0) == 'o' ||
        s.at(0) == 'u' || s.at(0) == 'e' ||
        s.at(0) == 'i') {
            isVowel = 1;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s.at(i) == 'a' || s.at(i) == 'o' ||
            s.at(i) == 'u' || s.at(i) == 'e' ||
            s.at(i) == 'i') {
            isVowel = 1;
        
        } else {
            isVowel = 0;
        }
        
        if (isVowel == 0) {
            if (s.at(i) == 'n') {
                isVowel = 0;
                if (i == s.size() - 1) {
                    cout << "YES";
                    return 0;
                }
            } else if (i == s.size() - 1) {
                can = 0;
                cout << "NO";
                return 0;
            } else if (!(s.at(i + 1) == 'a' || s.at(i + 1) == 'o' ||
                       s.at(i + 1) == 'u' || s.at(i + 1) == 'e' ||
                       s.at(i + 1) == 'i')) {
                           can = 0;
                           cout << "NO";
                        //    cout << "DOWN: " << "i: " << i;
                           return 0;
                       }
        } 
    }
    cout << "YES";
    return 0;
}
