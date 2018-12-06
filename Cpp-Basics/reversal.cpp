#include <iostream>
using namespace std;

void swap(int arr[], int n)
{
	int j = n - 1;
	int i = 0;
	while (i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
void rotate(int a[], int d, int n)
{
	swap(a, d);
	swap(a, n - d);
	swap(a, n);
}

int main()
{
	//code
	int t;
	cin >> t;
	while (t--)
	{
		int n, d;
		cin >> n >> d;
		int a[10000];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		rotate(a, d, n);
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}
