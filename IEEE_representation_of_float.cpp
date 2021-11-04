#include<bits/stdc++.h>

using namespace std;

union number {
    float value;
    struct data {
        unsigned int fraction : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } valueData;
} num;


int main() {
    cin >> num.value;
    cout << num.valueData.sign << " || " << bitset<8>(num.valueData.exponent).to_string()
    << " || " << bitset<23>(num.valueData.fraction).to_string() << endl;
    return 0;
}
