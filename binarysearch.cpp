/*
NOTE=Array has to be sorted
Algorithm:
1.Take start =0 and end=size-1
2.Repeat following steps till start<=end
		a)set mid=(start+end)/2
		b)check if arr[mid]==num,then return mid
		c)if num<array[mid], set end = mid-1
		d)Else set start =mid+1
3.If element is not in the array return -1
*/




#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int num)
{
	int start = 0, end = size - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == num)
		{
			return mid;
		}
		else if (num < arr[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int arr[10000];
	int size;
	cout << "Enter the size of array:";
	cin >> size;
	int num;
	cout << "Enter the array elements: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter number to search? ";
	cin >> num;
	cout << binary_search(arr, size, num);
	return 0;
}
