#include <bits/stdc++.h>

using namespace std;


bool isPrime(int num) {
  cout << "THE NUM : " << num << endl;
  if (num <= 0) {
    num *= -1;
    cout << "AFTER: " << num << endl;
  }
  if (num == 1 || num == 0) {
    return false;
  } else if (num == 2) {
    return true;
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
