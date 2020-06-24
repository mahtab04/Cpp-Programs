#include <bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int size)
{
    for (int low = 0, high = size - 1; low < high; low++, high--)
    {
        swap(arr[low], arr[high]);
    }
}

void ReverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void leftRotateArray(int arr[], int size, int d)
{
    if (d == 0)
        return;
    ReverseArray(arr, 0, d - 1);
    ReverseArray(arr, d, size - 1);
    ReverseArray(arr, 0, size - 1);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int d = 2;
    //leftRotateArray(arr, 6, d);
    //rotate(arr, arr + 2, arr + 6);
    printArray(arr, 6);
    return 0;
}