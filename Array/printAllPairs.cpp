#include <iostream>
using namespace std;

void PrintAllPairs(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "(" << arr[i] << arr[j] << ")"
                 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    PrintAllPairs(arr, n);
}