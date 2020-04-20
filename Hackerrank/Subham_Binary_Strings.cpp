//Problem Link -> https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/subham-and-binary-strings/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    char ch;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> ch;
      if (ch == '0')
      {
        res++;
      }
    }
    cout << res << endl;
  }
}