// Problem Link -> https://practice.geeksforgeeks.org/problems/series-x1/0

#include <iostream>
using namespace std;

int main()
{
  //code
  int t;
  cin >> t;
  while (t--)
  {
    long long int n;
    cin >> n;
    long long int d = (n * n * n) + n;
    cout << d << endl;
  }
  return 0;
}