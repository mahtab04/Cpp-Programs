// https://leetcode.com/problems/smallest-even-multiple/description/
#include <bits/stdc++.h>
        using namespace std;

int smallestEvenMultiple(int n)
{
    if (n % 2 == 0)
    {
        return n;
    }
    return n * 2;
}

int main()
{
    int n = 5;
    int m = 6;
    cout << smallestEvenMultiple(n) << endl;
    cout << smallestEvenMultiple(m) << endl;
    return 0;
}