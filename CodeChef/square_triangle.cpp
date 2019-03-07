// Problem Link => "https://www.codechef.com/problems/TRISQ"

#include <iostream>
using namespace std;
int numberOfSquares(int b)
{
    b = (b - 2);
    b = b / 2;
    return b * (b + 1) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int a;
        cin >> a;
        cout << numberOfSquares(a) << endl;
    }
}