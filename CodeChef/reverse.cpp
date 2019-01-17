// If an Integer N, write a program to reverse the given number.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

// Output
// Display the reverse of the given number N.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ N ≤ 100000
// Example
// Input
// 4
// 12345
// 31203
// 2123
// 2300
// Output
// 54321
// 30213
// 3212
// 32
// problem link->"https://www.codechef.com/problems/FLOW007"

#include <iostream>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        int rev = 0, rem;
        cin >> n;
        while (n != 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        cout << rev << endl;
    }
}