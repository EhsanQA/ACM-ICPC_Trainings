#include<bits/stdc++.h>

using namespace std;

string s1, s2, s3, s4;

int main() {
    while (true) {
        cin >> s1 >> s2 >> s3 >> s4;
        if (s1 == "0000" && s2 == "0000" && s3 == "0000" && s4 == "0000")
            break;
        int sum = 0;
        for (int i = 1; i <= 4; i++) {
            if (i % 2 == 1) {
                int t = (s1.at(i - 1) - '0') * 2;
                if (t > 9)
                    t -= 9;
                sum += t;
                t = (s2.at(i - 1) - '0') * 2;
                if (t > 9)
                    t -= 9;
                sum += t;
                t = (s3.at(i - 1) - '0') * 2;
                if (t > 9)
                    t -= 9;
                sum += t;
                t = (s4.at(i - 1) - '0') * 2;
                if (t > 9)
                    t -= 9;
                sum += t;
            } else {
                sum += (s1.at(i - 1) - '0') + (s2.at(i - 1) - '0') +
                 (s3.at(i - 1) - '0') + (s4.at(i - 1) - '0');
            }
        }
        if (sum % 10 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        
    }
    return 0;
}
