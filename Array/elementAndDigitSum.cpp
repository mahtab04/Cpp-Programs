// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/

#include <bits/stdc++.h>
using namespace std;

int differenceOfSum(vector<int> &nums)
{
    int totalsum = 0;
    for (auto &itr : nums)
        totalsum += itr;

    int eSumm = 0;
    for (auto &itr : nums)
    {
        while (itr)
        {
            eSumm += itr % 10;
            itr /= 10;
        }
    }
    return abs(totalsum - eSumm);
}

int main()
{
    vector<int> nums = {12, 34, 56, 78};
    cout << differenceOfSum(nums) << endl;
    return 0;
}