#include <iostream>
#include <bits/stdc++.h>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");

int theStack[10], index = 0;
int nums[] = {-2, 1, -1, 2};

void push(int x) {
    theStack[index] = x;
    index++;
}

void pop() {
    theStack[index - 1] = 0;
    index--;
}

bool isEmpty() {
    if (index == 0) {
        return true;
    }
    return false;
}

int lastOne() {
    return theStack[index - 1];
}

bool validator() {

    int len = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < len; i++) {
        if (nums[i] > 0) {
            push(nums[i]);
        }
        else if (nums[i] < 0 && isEmpty()) {
            cout << "false ";
            return false;
        }
        else if (nums[i] < 0 && nums[i] == -1 * theStack[index - 1]) {
            cout << "third in ";
            pop();
        }
        else {
            cout << "false ";
            return false;
        }
    }
    cout << "true ";
    return true;

}

int main(){
    bool answer = validator();

    cout << answer;
    return 0;
}
