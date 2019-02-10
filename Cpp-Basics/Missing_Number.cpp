// Find the Missing Number
// You are given a list of n-1 integers and these integers are in
// the range of 1 to n. There are no duplicates in list. One of
// the integers is missing in the list. Write an efficient code
// to find the missing integer.

#include <iostream>
using namespace std;
int missing(int arr[], int n)
{
    int i;
    int x1 = arr[0]; /* For xor of all the elements in array */
    int x2 = 1;      /* For xor of all the elements from 1 to n+1 */
    for (i = 1; i < n; i++)
        x1 = x1 ^ arr[i];
    for (i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}
int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int miss = missing(arr, 5);
    cout << miss << endl;
}
