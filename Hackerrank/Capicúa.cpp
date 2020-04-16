// Problem Link -> https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/capicua-2/

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long int orignum, num, rem, rev = 0;
		cin >> orignum;
		num = orignum;
		while (num != 0)
		{
			rem = num % 10;
			rev = 10 * rev + rem;
			num = num / 10;
		}
		if (rev == orignum)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
