// // You're given an integer N. Write a program to calculate the sum of all the digits of N.

// // Input
// // The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// // Output
// // Calculate the sum of digits of N.

// // Constraints
// // 1 ≤ T ≤ 1000
// // 1 ≤ N ≤ 1000000
// // Example
// // Input
// // 3 
// // 12345
// // 31203
// // 2123
// // Output
// // 15
// // 9
// // 8

// problem link->"https://www.codechef.com/problems/FLOW006"



#include<iostream>
using namespace std;
#define ll long long int

int
main ()
{
  int t, num, sum = 0;

  cin >> t;
  while (t--)
    {
      cin >> num;
      while (num != 0)
	{

	  sum = sum + (num % 10);
	  num = num / 10;


	}
    cout << sum<<endl;
    sum=0;



    }
    
}