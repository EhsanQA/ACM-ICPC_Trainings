#include<bits/stdc++.h>

using namespace std;

int n, k;

int main() {

    // initializing "a" and "result";
    cin >> n;
    int a[n + 1];
    int result[n + 1];
    a[0] = -1; // our index starts from 1;
    result[0] = -1;

    // getting the input array "a" and setting all elements in "result" as 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        result[i] = 0;
    }


    // finding the maximum element in the input array and setting it to "k";
    int maximum = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] > maximum)
            maximum = a[i];

    k = maximum;

    // initializing "c";
    int c[k + 1];
    c[0] = -1;    

    // setting all elements in "c" to 0;
    for (int i = 1; i <= k; i++)
        c[i] = 0;
    
    // counting every occurrences of "i" in the input array; 
    for (int i = 1; i <= n; i++)
        c[a[i]]++;
    
    // setting "result" from "c";
    int result_temp_index = 1;
    for (int i = 1; i <= k; i++) {
        if (c[i] != -1) {
            for (int j = 0; j < c[i]; j++)
                result[result_temp_index + j] = i;
            result_temp_index += c[i];
        }
    }

    // printing the sorted "result" array;
    for (int i = 1; i <= n; i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}
