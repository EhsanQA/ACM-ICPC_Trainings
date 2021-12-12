#include <bits/stdc++.h>

using namespace std;

int xo, yo, xt, yt, xth, yth, xf, yf;

int main() {
    cin >> xo >> yo >> xt >> yt;
    if (xo == xt && yo == yt) {
        cout << -1 << endl;
    }
    if (xo == xt) {
        xth = xo + abs(yt - yo);
        yth = yo;
        xf = xth;
        yf = yt;
        cout << xth << " " << yth << " ";
        cout << xf << " " << yf;
    } else if (yo == yt) {
        xth = xo;
        yth = yo + abs(xt - xo);
        xf = xt;
        yf = yth;
        cout << xth << " " << yth << " ";
        cout << xf << " " << yf;
    } else if (abs(xt - xo) != abs(yt - yo)) {
        cout << -1 << endl;
    } else {
        xth = xo;
        yth = yt;
        xf = xt;
        yf = yo;
        cout << xth << " " << yth << " ";
        cout << xf << " " << yf;
    }
    return 0;
}
