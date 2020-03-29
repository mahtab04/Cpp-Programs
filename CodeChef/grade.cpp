// Problrm Link -> https://www.codechef.com/problems/FLOW014

#include <iostream>
using namespace std;

int main()
{
  // your code goes here
  int hn;
  float cc;
  long int ts;
  int t;
  cin >> t;
  while (t--)
  {
    cin >> hn >> cc >> ts;
    if (hn > 50 && cc < 0.7 && ts > 5600)
      cout << "10" << endl;
    else if (hn > 50 && cc < 0.7)
      cout << "9" << endl;
    else if (cc < 0.7 && ts > 5600)
      cout << "8" << endl;
    else if (hn > 50 && ts > 5600)
      cout << "7" << endl;
    else if (hn > 50 || cc < 0.7 || ts > 5600)
      cout << "6" << endl;
    else
      cout << "5" << endl;
  }
  return 0;
}
