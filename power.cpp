
/* power of a number using recusion

input
x=5
n=3;

output
125
explanation 5*5*5=125
*/

#include <iostream>
using namespace std;

int power(int x, int n)
{
    if (x == 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}

int main()
{

    int a = 5, b = 3;
    cout << power(a, b);
}
