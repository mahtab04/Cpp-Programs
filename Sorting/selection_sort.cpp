#include <bits/stdc++.h>
using namespace std;

//Slection sort algo
//Inplace
//Not stable
//T.C = O(n^2)
//T(n) = T(n - 1) + n
//Needs least no of swapping

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min_no = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_no])
            {
                min_no = j;
            }
        }
        swap(arr[min_no], arr[i]);
    }
}

int main()
{
    int arr[] = {98, 21, 4, 2, 3, 1, 5};
    int size = sizeof(arr) / sizeof(int);
    selectionSort(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}
