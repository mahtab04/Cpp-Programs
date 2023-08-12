// https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/
#include <bits/stdc++.h>
using namespace std;
bool areOccurrencesEqual(string s)
{

  std::unordered_map<char, int> m;
  for (auto i : s)
  {
    m[i]++;
  }

  int firstcount = m[s[0]];
  for (auto i : m)
  {
    if (i.second != firstcount)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  std::string s = "abacbc";
  std::cout << areOccurrencesEqual(s);
}