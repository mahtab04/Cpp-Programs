//Problem Link -> https://www.codechef.com/problems/HOWMANY

#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int n, count = 0;
  cin >> n;
  while (n != 0)
  {
    n = n / 10;
    ++count;
  }
  if (count == 1)
  {
    cout << "1" << endl;
  }
  else if (count == 2)
  {
    cout << "2" << endl;
  }
  else if (count == 3)
  {
    cout << "3" << endl;
  }
  else if (count > 3)
  {
    cout << "More than 3 digits" << endl;
  }
  return 0;
}
