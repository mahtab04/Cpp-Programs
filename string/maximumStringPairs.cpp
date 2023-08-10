// https://leetcode.com/problems/find-maximum-number-of-string-pairs/

#include <bits/stdc++.h>
using namespace std;

std::string rev(const std::string &s)
{
  std::string res(s.length(), ' '); // Preallocate memory
  for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
  {
    res[i] = s[j];
  }
  return res;
}
int maximumNumberOfStringPairs(vector<string> &str)
{
  int count = 0;
  for (int i = 0; i < str.size(); i++)
  {
    for (int j = i + 1; j < str.size(); j++)
    {
      if (rev(str[j]) == str[i])
      {
        count++;
      }
    }
  }
  return count;
}

int main()
{
  vector<string> str = {"abcd", "dcba", "lls", "s", "sssll"};
  cout << maximumNumberOfStringPairs(str);
  return 0;
}