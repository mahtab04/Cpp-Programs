#include <iostream>

using namespace std;

int main()
{
    int n, arr[1000], i = 0;
    cout << "Enter a deciaml number: " << endl;
    cin >> n;

    while (n > 0)
    {
        /* code */
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout << "The binary number is ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}