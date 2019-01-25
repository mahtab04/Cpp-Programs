#include <iostream>
using namespace std;
bool isprime(int n)
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
    int n;
    cout << "Enter a number to check whether it is prime or not: " << endl;
    cin >> n;
    bool ans = isprime(n);
    if (ans==1)
        cout<<n<<" is a prime number."<<endl;
    else
        cout<<n<<" is not a prime number."<<endl;
    
}