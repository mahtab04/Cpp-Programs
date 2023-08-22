// https://leetcode.com/problems/neither-minimum-nor-maximum/description/

#include <bits/stdc++.h>
using namespace std;

int findNonMinOrMax(vector<int> &nums)
{
    if (nums.size() <= 2)
    {
        return -1;
    }
    sort(nums.begin(), nums.end());
    return nums[1];
}

int main()
{
    vector<int> nums = {4000, 3000, 1000, 2000};
    cout << findNonMinOrMax(nums) << endl;
    return 0;
}