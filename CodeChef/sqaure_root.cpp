// problem link ->"https://www.codechef.com/problems/FSQRT"

#include <iostream>
using namespace std;

int main()
{
    int t, i = 1, result = 1;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        if (number == 0 || number == 1)
            cout << number << endl;
        else
            while (result <= number)
            {
                i++;
                result = i * i;
            }
        cout << i - 1 << endl;
    }
}