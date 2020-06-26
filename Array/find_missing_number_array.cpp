#include <bits/stdc++.h>
using namespace std;
//Find missing element in an array in a given range
int findMissing(int arr[], int size)
{
    int sum = 0;
    // calculate sum of all elements of the array
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum - (size * (size + 1) / 2);
}

//return missing number using
int findMissingXOR(int arr[], int size)
{
    int XOR = 0;
    for (int i = 0; i < size; i++)
    {
        XOR ^= arr[i];
    }
    for (int i = 1; i <= size + 1; i++)
    {
        XOR ^= i;
    }
    return XOR;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    cout << " The Missing number is: " << findMissing(arr, size) << endl;
    int arr2[] = {1, 2, 3, 4, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "The Missing number is : " << findMissingXOR(arr2, size2) << endl;
}
