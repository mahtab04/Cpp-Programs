#include <iostream>
using namespace std;
void mergeSortedArray(int arr1[], int arr2[], int arr3[], int len1, int len2)
{
    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < len1)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < len2)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[7] = {2, 4, 8, 10, 11, 12, 16};
    int arr3[12];
    mergeSortedArray(arr1, arr2, arr3, 5, 7);
    for (auto x : arr3)
    {
        cout << x << " ";
    }
}