/*Given an array of length N, swap every pair of alternate elements in the array.
You don't need to print or return anything, just change in the input array itself.

input format
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

output format
Elements after swapping, separated by space.

Sample Input 1:
6
9 3 6 12 4 32
sample output:
3 9 12 6 32 4

Sample Input 2:
9
9 3 6 12 4 32 5 11 19

Sample Output 2 :
3 9 12 6 32 4 11 5 19
*/

#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size)
{

    int temp;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 == size)
            break;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
int main()
{

    int a[1000];
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    swapAlternate(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
