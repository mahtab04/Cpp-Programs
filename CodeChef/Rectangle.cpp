//Prolem Link -> https://www.codechef.com/problems/RECTANGL

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
    int a[4];
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < 4; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    if (a[0] == a[1] && a[2] == a[3])
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
