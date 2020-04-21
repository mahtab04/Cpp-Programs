// Problem Link -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/vowels/

#include <iostream>

using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a;
    int count = 0;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'o' || a[i] == 'i' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
      {
        count++;
      }
    }
    cout << count << endl;
  }
}