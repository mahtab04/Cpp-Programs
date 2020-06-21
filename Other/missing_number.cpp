// problem link->https: //cses.fi/problemset/task/1083/

#include <iostream>
#define ll long long
using namespace std;

int main()
{

    ll n;
    cin >> n;

    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    ll result = (n * (n + 1) / 2) - sum;
    cout << result;
}
