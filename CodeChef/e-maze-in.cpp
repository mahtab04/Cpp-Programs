// Problem Link -> https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int x = 0, y = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'L')
    {
      x--;
    }
    if (s[i] == 'R')
    {
      x++;
    }
    if (s[i] == 'U')
    {
      y++;
    }
    if (s[i] == 'D')
    {
      y--;
    }
  }
  cout << x << " " << y << endl;
}
