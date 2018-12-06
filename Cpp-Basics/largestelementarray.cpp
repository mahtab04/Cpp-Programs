<<<<<<< HEAD
/* Find the largest element in a given array

input=34,56,1,23,4,90



output=90

*/




#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[100];
    int max = INT_MIN;
    cout << "Enter array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "The largest element in array is " << max << endl;

    return 0;
}
=======
/* Find the largest element in a given array

input=34,56,1,23,4,90



output=90

*/




#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int a[100];
    int max = INT_MIN;
    cout << "Enter array element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "The largest element in array is " << max << endl;

    return 0;
}
>>>>>>> d8f5f9cea559bbb436106240e8c114bdd4170650
