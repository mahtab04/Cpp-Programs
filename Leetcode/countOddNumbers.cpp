// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/description/
#include <bits/stdc++.h>
using namespace std;

int countOdds(int low, int high)
{

    if ((high - low + 1) % 2 == 0) // if the range is even example 3-4, 3-5, 3-6, 3-7
    {
        return (high - low + 1) / 2;  // return the half of the range
    } 
    else
    {
        if (low % 2 == 0) // if the range is odd and the low is even example 4-7
        {
            return (high - low + 1) / 2; // return the half of the range
        }
        else
        {
            return (high - low + 1) / 2 + 1; // return the half of the range + 1
        }
    }
}

int main()
{
    int low = 3, high = 7;
    cout << countOdds(low, high) << endl;
    return 0;
}