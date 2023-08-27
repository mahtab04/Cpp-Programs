// https://leetcode.com/problems/sum-multiples/description/
#include <bits/stdc++.h>
using namespace std;

int sumOfMultiples(int n)
{
    int sum = 0;
    for (int i = 3; i <= n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0))
            sum += i;
    }
    return sum;
}

int main()
{
    cout << sumOfMultiples(10);
    return 0;
}