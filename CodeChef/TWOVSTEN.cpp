//Problem Link -> https://www.codechef.com/problems/TWOVSTEN

#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    long long int a;
    cin >> a;
    if (a % 10 == 0)
    {
      cout << "0" << endl;
    }
    else if (a % 5 == 0)
    {
      cout << "1" << endl;
    }
    else if (a != 5 && a != 10)
    {
      cout << "-1" << endl;
    }
  }
  return 0;
}
