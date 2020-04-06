// Problem Link -> https://www.codechef.com/problems/ALPHABET

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  string s;
  cin >> s;

  int a[26] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    char x = s[i];
    int p = (int)x;
    p = p - 97;
    a[p] = 1;
  }
  int n;
  cin >> n;
  while (n--)
  {
    int count = 0;
    string s2;
    cin >> s2;
    for (int i = 0; i < s2.size(); i++)
    {
      char y = s2[i];
      int q = (int)y;
      q = q - 97;
      if (a[q] == 0)
        count++;
      else
        count = count;
    }
    if (count > 0)
      cout << "No" << endl;
    else
      cout << "Yes" << endl;
  }
  return 0;
}
