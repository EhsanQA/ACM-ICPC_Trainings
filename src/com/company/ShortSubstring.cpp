#include <iostream>

using namespace std;

int n;


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        cout << t.at(0) << t.at(1);
        for (int j = 2; j < t.size() - 1; j += 2) {
            cout << t.at(j + 1);
        }
        cout << endl;
    }
    return 0;
}
