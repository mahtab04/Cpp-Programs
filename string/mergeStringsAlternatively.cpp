// https://leetcode.com/problems/merge-strings-alternately/description/
#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string a, string b)
{

  int i = 0, j = 0;
  std::string ans = "";

  while (i < a.size() && j < b.size())
  {
    ans += a[i];
    ans += b[j];
    i++;
    j++;
  }
  while (i < a.size())
  {
    ans += a[i];
    i++;
  }
  while (j < b.size())
  {
    ans += b[j];
    j++;
  }
  return ans;
}

int main()
{
  string a = "abcd", b = "pq";
  cout << mergeAlternately(a, b);
  return 0;
}