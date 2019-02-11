// Check Whether given number is expressed in power of two or not
// Example:
// Input:
// 5
// Output:
// No
// Input:
// 4
// Output:
// Yes
// Explanation 2^2=4

#include <iostream>
using namespace std;
void power_of_2(int number)
{
    if ((number & number - 1) == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    int a = 5;
    int b = 4;
    power_of_2(a);
    power_of_2(b);
    return 0;
}