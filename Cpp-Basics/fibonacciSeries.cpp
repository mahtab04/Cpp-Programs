#include <iostream>
using namespace std;

// checks if a number belongs to fibonaaci series

bool checkMember(int n) {
  int a = 0, b = 1, c;
  while (a < n) {
    c = a + b;
    a = b;
    b = c;
  }
  return a == n;
}

int main() {
  int n;
  cin >> n;
  if (checkMember(n)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}
