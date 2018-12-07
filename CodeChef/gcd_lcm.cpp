// Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

// Output
// Display the GCD and LCM of A and B separated by space respectively.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B ≤ 1000000
// Example
// Input
// 3
// 120 140
// 10213 312
// 10 30
// Input
// The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

// Output
// Display the GCD and LCM of A and B separated by space respectively.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B ≤ 1000000
// Example
// Input
// 3
// 120 140
// 10213 312
// 10 30

// Output

// 20 840
// 1 3186456
// 10 30

// Output

// 20 840
// 1 3186456
// 10 30

#include <iostream>

using namespace std;
int gcd(long int a, long int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << (a * b) / gcd(a, b) << endl;
    }
}