// Problem Link -> https://www.codechef.com/submit/FLOW011

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    double gross_salary, basic_salary;
    cin >> basic_salary;
    if (basic_salary < 1500)
    {
      gross_salary = basic_salary + ((basic_salary * 10) / 100) + ((basic_salary * 90) / 100);
      cout << gross_salary << endl;
    }
    else if (basic_salary >= 1500)
    {
      gross_salary = basic_salary + 500 + ((basic_salary * 98) / 100);
      cout << fixed << setprecision(2) << gross_salary << endl;
    }
  }
  return 0;
}
