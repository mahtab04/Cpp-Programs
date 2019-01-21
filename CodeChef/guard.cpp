//Problem Link->"https://www.codechef.com/problems/REMISS"

#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        cout << (a > b ? a : b) << " " << (a + b) << "\n";
    }
    return 0;
}