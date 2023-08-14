// https://leetcode.com/problems/find-the-difference/description/
#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string &s, string &t)
{
  int ans = 0;
  for (int i = 0; i < s.size(); i++)
  {
    ans -= s[i];
    ans += t[i];
  }
  ans += t[s.size()];
  return ans;
}

char findTheDifference(string &s, string &t)
{
  int ans = 0;
  for (int i = 0; i < s.size(); i++)
  {
    ans -= s[i];
    ans += t[i];
  }
  ans += t[s.size()];
  return ans;
}
int main()
{
  string str_1 = "abcd";
  string str_2 = "abcde";

  cout << findTheDifference(str_1, str_2) << endl;
  return 0;
}