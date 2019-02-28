// Write a program to find the factorial value of any number entered by the user.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// Display the factorial of the given number N .

// Constraints
// 1 ≤ T ≤ 1000
// 0 ≤ N ≤ 20

// Example
// Input
// 3 
// 3 
// 4
// 5

// Output

// 6
// 24
// 120

// https://www.codechef.com/problems/FLOW018

#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	int smallOutput = factorial(n - 1);
	int output = n * smallOutput;
	return output;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int number;
        cin>>number;
        cout<<factorial(number)<<endl;
        
    }
}