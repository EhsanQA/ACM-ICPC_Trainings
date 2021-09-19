#include<bits/stdc++.h>

using namespace std;

int n, counter;
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        counter = 0;
        vector<int> tmp = {};
        int first = rand() % 2;
        for (int j = 0; j < 1024; j++) {
            if (rand() % 2 == first)
                counter++;
            else {
                tmp.push_back(counter);
                if (first == 1)
                    first = 0;
                else 
                    first = 1;
                counter = 0;
            }
        }
        // cout << "THE MAXIMUM OF ONE TEST: " << *max_element(tmp.begin(), tmp.end()) << endl;
        v.push_back(*max_element(tmp.begin(), tmp.end()));
    }
    int sum = 0;
    for (int i : v)
        sum += i;
    double ans = (double) sum / n;
    cout << ans << endl;
    return 0;
}
