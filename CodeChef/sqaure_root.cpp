// problem link ->"https://www.codechef.com/problems/FSQRT"

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int number;
        int i = 1, result = 1;
        ;
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