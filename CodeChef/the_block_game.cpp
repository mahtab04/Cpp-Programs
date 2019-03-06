// Problem Link => https://www.codechef.com/problems/PALL01


#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rev = 0, temp;
        cin >> n;
        int orig = n;
        while (n != 0)
        {
            temp = n % 10;
            rev = rev * 10 + temp;
            n = n / 10;
        }
        if (orig == rev)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "losses" << endl;
        }
    }
}