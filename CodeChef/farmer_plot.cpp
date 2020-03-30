

// Problem Link - > https://www.codechef.com/problems/RECTSQ
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int sq = __gcd(a, b);
    cout << (a * b) / (sq * sq) << endl;
  }
  return 0;
}
