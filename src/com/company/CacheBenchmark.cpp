#include<bits/stdc++.h>

using namespace std;

int loger(int a) {
    return (int)(log(a) / log(2));
}

int binToDec(string a) {
    int dec = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == '1')
            dec += pow(2, a.size() - 1 - i);
    }
    return dec;
}

int tagger(int tagSize, string address) {
    string tag = "";
    vector<char> num;
    for (int i = 0; i < tagSize; i++)
        num.push_back(address[i]);
    for (int i = 0; i < num.size(); i++)
        tag += num[i];
    
    return binToDec(tag);
}

struct Cache {
    int dataSize = 2048;
    int blockSize = 32;
    int addressSize = 32;
    int cacheHeight = dataSize / blockSize;
    Cache(){};
    Cache (int dS, int bS, int aS) {
        dataSize = dS;
        blockSize = bS;
        addressSize = aS;
    }
    int tagSize = addressSize - log(blockSize) - log(dataSize / blockSize);
};

double tester_1_2(Cache c) {
    int n;
    cin >> n;
    int hit = 0, miss = 0;
    int data[c.cacheHeight][2];
    for (int i = 0; i < c.cacheHeight; i++)
        data[i][0] = 0, data[i][1] = 0;
    for (int i = 0; i < n; i++) {
        string in;
        cin >> in;
        int in_d = binToDec(in);
        // cout << "THE IN_D IS " << in_d << endl;
        int index = in_d % c.cacheHeight;
        // cout << "THE INDEX IS " << index << endl;
        int in_tag = tagger(c.tagSize, in);
        // cout << "THE IN_TAG IS " << in_tag << endl;
        if (in_tag == data[index][1])
            hit++;
        else {
            data[index][0] = 0;
            miss++;
            data[index][1] = in_tag;
            data[index][0] = 1;
        }
    }
    // cout << c.tagSize << endl;
    // cout << hit << " " << miss << endl;
    // cout << c.cacheHeight << endl;
    return hit * 100 / (hit + miss);
}

double tester_3(Cache c, int w) {
    int n;
    cin >> n;
    int hit = 0, miss = 0;
    int modTo = (int) (c.cacheHeight / w);
    int data[c.cacheHeight / w][5];
    for (int i = 0; i < modTo; i++) {
        for (int j = 0; j < w + 1; j++) {
            data[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        string in;
        cin >> in;
        int in_d = binToDec(in);
        int index = in_d % modTo;
        int in_tag = tagger(c.tagSize, in);
        bool is_hit = false;
        for (int j = 0; j < w; j++) {
            if (in_tag == data[index][j]) {
                is_hit = true;
                break;
            }
        }
        if (is_hit)
            hit++;
        else {
            miss++;
            data[index][data[index][w]] = in_tag;
            if (data[index][w] == w - 1)
                data[index][w] = 0;
            else
                data[index][w]++;
        }

    }
    return hit * 100 / (hit + miss);
}

int main() {
    Cache the_cache;
    cout << the_cache.dataSize << endl;
    cout << tester_1_2(the_cache) << endl;
    return 0;
}
