// Problem Link => https://www.codechef.com/problems/PRB01

#include <iostream>
using namespace std;
typedef long long int ll;
bool isprime(ll n)
{
    int d = 2;
    while (d < n)
    {
        if (n % d == 0)
        {
            return false;
        }
        d++;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        ll n;
        cin >> n;
        bool ans = isprime(n);
        if (ans == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}