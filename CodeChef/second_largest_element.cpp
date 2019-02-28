// Three numbers A, B and C are the inputs. Write a program to find second largest among three numbers.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains three integers A, B and C.

// Output
// Display the second largest among A, B and C.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B,C ≤ 1000000
// Example
// Input
// 3 
// 120 11 400
// 10213 312 10
// 10 3 450

// Output

// 120
// 312
// 10

// https://www.codechef.com/problems/FLOW017




#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a > c && a < b))
            cout << a << endl;
        else if ((b > a && b < c) || (b > c && b < a))
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}