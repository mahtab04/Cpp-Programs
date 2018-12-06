#include <iostream>
using namespace std;

int main()
{
    long int n;
    int rem, dec = 0, i = 1;
    cout << "Enter a binary number: ";
    cin >> n;
    cout << "===========================" << endl;

    while (n > 0)
    {
        rem = n % 10;
        dec = dec + rem * i;
        n = n / 10;
        i *= 2;
    }
    cout << "The deciaml number is " << dec << endl;
}