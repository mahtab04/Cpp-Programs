// Problem Link -> https://www.codechef.com/problems/HEADBOB

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int flag = 0, size;

    string b;
    cin >> size >> b;
    for (int i = 0; i < size; i++)
    {
      if (b[i] == 'Y')
      {
        flag = 1;
        cout << "NOT INDIAN" << endl;
        break;
      }
      else if (b[i] == 'I')
      {
        flag = 1;
        cout << "INDIAN" << endl;
        break;
      }
    }
    if (flag != 1)
    {
      cout << "NOT SURE" << endl;
    }
  }
}