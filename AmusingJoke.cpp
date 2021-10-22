#include <iostream>

using namespace std;

int z;
string a;
string b;
string c;


int main() {
    cin >> a >> b >> c;
    char as[a.size()];
    char bs[b.size()];
    char cs[c.size()];
    for (int i = 0; i < a.size(); i++) {
        as[i] = a.at(i);
    }

    for (int i = 0; i < b.size(); i++) {
        bs[i] = b.at(i);
    }

    for (int i = 0; i < c.size(); i++) {
        cs[i] = c.at(i);
    }

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < c.size(); j++) {
            if (as[i] == cs[j]) {
                cs[j] = '-';
                as[i] = '-';
                break;
            }
        }
    }

    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < c.size(); j++) {
            if (bs[i] == cs[j]) {
                cs[j] = '-';
                bs[i] = '-';
                break;
            }
        }
    }

    // for (char i : cs) {
    //     cout << i;
    // }
    // cout << "\n";
    // for (char i : as) {
    //     cout << i;
    // }
    // cout << "\n";
    // for (char i : bs) {
    //     cout << i;
    // }


    for (char i : as) {
        if (i != '-') {
            z = 1;
            cout << "NO";
            return 0;
            break;
        }
    }

    for (char i : bs) {
        if (i != '-') {
            z = 1;
            cout << "NO";
            return 0;
            break;
        }
    }

    for (char i : cs) {
        if (i != '-') {
            z = 1;
            cout << "NO";
            return 0;
            break;
        }
    }

    cout << "YES";

    return 0;
}
