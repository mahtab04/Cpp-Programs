// Problem Link -> https://www.codechef.com/problems/PPSUM

#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    long int a, b;
    cin >> a >> b;
    while (a--)
    {
      b = b * (b + 1) / 2;
    }
    cout << b << endl;
  }
  return 0;
}
