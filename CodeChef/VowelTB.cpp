//Problem Link -> https://www.codechef.com/problems/VOWELTB

#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  string s;
  cin >> s;
  if (s == "A" || s == "E" || s == "I" || s == "O" || s == "U" || s == "a" || s == "e" || s == "i" || s == "o" || s == "u")
  {
    cout << "Vowel" << '\n';
  }
  else
  {
    cout << "Consonant" << '\n';
  }
  return 0;
}
