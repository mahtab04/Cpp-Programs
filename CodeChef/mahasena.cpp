// Problem Link => https://www.codechef.com/problems/AMR15A

#include <iostream>
using namespace std;
int main()
{
    int t, c1 = 0, c2 = 0;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if (c1 > c2)
    {
        cout << "READY FOR BATTLE" << endl;
    }
    else
    {
        cout << "NOT READY" << endl;
    }
}