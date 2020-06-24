#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int j = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[j++] = nums[i];
        }
    }
    nums[j++] = nums[nums.size() - 1];
    return j;
}

int removeDuplicates(int arr[], int size)
{
    if (size == 0 || size == 1)
        return size;
    int j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j++] = arr[size - 1];
    return j;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9};
    int size = sizeof(arr) / sizeof(int);
    size = removeDuplicates(arr, size);
    for (auto x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
}