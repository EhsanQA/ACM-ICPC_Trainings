#include <iostream>

using namespace std;

int numberOfQuestions;
int willAnswerCount = 0;

int main() {
    cin >> numberOfQuestions;
    for (int i = 0; i < numberOfQuestions; i++) {
        
        int sumTemp = 0;
        int x, y, z;
        cin >> x >> y >> z;
        if ((x + y + z) > 1) {
            willAnswerCount++;
        } 
        
    }
    cout << willAnswerCount;
    return 0;
}
