// https://leetcode.com/problems/counting-words-with-a-given-prefix/description/

#include <bits/stdc++.h>
using namespace std;

int prefixCount(vector<string> &words, string pref)
{
  int count = 0;
  int len = pref.length();
  for (auto &s : words)
  {
    string comp = s.substr(0, len);
    if (comp == pref)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  vector<string> words = {"dog", "deer", "deal"};
  string pref = "de";
  cout << prefixCount(words, pref) << endl;
  return 0;
}