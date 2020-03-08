// Problem Link = ""


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    float a, b, total;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << fixed;
        total = a * b;
        if (a > 1000)
        {
            cout << setprecision(6) << (0.9 * total) << endl;
        }
        else
        {
            cout << setprecision(6) <<total;
        }
    }
}

