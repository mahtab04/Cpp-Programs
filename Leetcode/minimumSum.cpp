// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/description/

#include <bits/stdc++.h>
using namespace std;

int minimumSum(int num)
{
    int arr[4];
    int i = 0;
    while (num > 0)
    {
        arr[i] = num % 10;
        num = num / 10;
        i++;
    }
    sort(arr, arr + 4);
    return (arr[0] * 10 + arr[2]) + (arr[1] * 10 + arr[3]);
}

int main()
{

    int num = 2932;
    int num_1 = 4009;
    cout << minimumSum(num) << endl;
    cout << minimumSum(num_1) << endl;
    return 0;
}