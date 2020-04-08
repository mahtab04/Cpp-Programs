//Problem Link -> https://www.codechef.com/problems/BINCOUNT

#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    long int a;
    int count = 0;
    cin >> a;
    while (a != 0)
    {
      if ((a & 1) > 0)
        count++;
      a = a >> 1;
    }
    cout << count << '\n';
  }
  return 0;
}
