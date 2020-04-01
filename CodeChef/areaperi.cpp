//Problem Link -> https://www.codechef.com/problems/AREAPERI

#include <iostream>
using namespace std;

int main()
{
  // your code goes here

  long int l, b, area, peri;
  cin >> l >> b;
  area = l * b;
  peri = 2 * (l + b);
  if (area > peri)
  {
    cout << "Area" << endl;
    cout << area << endl;
  }
  else if (peri > area)
  {
    cout << "Peri" << endl;
    cout << peri << endl;
  }
  else
  {
    cout << "Eq" << endl;
    cout << area << endl;
  }
  return 0;
}
