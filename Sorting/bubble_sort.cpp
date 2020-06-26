#include <bits/stdc++.h>
using namespace std;

//Bubble Sort

//T.C = O(n^2) ->worst case occurs when array is reversed sorted
//stable
//inplace
//No 0f passes = (n-2)


void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
//Optimized Bubble sort
void optimizedBubbleSort(int arr[], int size)
{
    bool swapped;
    for (int i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int arr[8] = {6, 5, 3, 1, 8, 7, 2, 4};
    bubbleSort(arr, 8);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}

