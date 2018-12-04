#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int val)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[10000];
    int size;
    int val;
    cout << "=================================================" << endl;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "==================================================" << endl;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "===================================================" << endl;
    cout << "Enter the element to search in the array: ";
    cin >> val;
    cout << "====================================================" << endl;
    cout << linear_search(arr, size, val);
}
