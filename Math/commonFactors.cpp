// https://leetcode.com/problems/number-of-common-factors/description/
#include <bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b)
{
    int count = 0;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            count++;
    }
    return count;
}

int main()
{

    int a = 6, b = 12;
    cout << commonFactors(a, b);
    return 0;
}