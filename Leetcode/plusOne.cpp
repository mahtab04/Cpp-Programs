// https://leetcode.com/problems/plus-one/description/
#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
  int ans = 0;

  for (int i = digits.size() - 1; i >= 0; i--)
  {
    if (digits[i] == 9)
    {
      digits[i] = 0;
    }
    else
    {
      digits[i] += 1;
      return digits;
    }
  }
  digits.push_back(0);
  digits[0] = 1;
  return digits;
}

int main()
{
  vector<int> v = {9, 9};
  v = plusOne(v);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}