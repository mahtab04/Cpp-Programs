// https://leetcode.com/problems/monotonic-array/description/

#include <bits/stdc++.h>
using namespace std;

bool isIncreasing(vector<int> &nums)
{

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {

            return false;
        }
    }
    return true;
}
bool isDecreasing(vector<int> &nums)
{

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {

            return false;
        }
    }
    return true;
}
bool isMonotonic(vector<int> &nums)
{
    bool ans_1 = isIncreasing(nums);
    bool ans_2 = isDecreasing(nums);
    if (ans_1 || ans_2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> nums = {1, 2, 2, 3};
    cout << isMonotonic(nums);
    return 0;
}