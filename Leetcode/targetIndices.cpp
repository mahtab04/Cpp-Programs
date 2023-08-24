// https://leetcode.com/problems/find-target-indices-after-sorting-array/description/

#include <bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            result.push_back(i);
        }
    }
    return result;
}

int main()
{

    vector<int> nums = {7, 8, 2, 3, 4, 1, 2, 3};
    int target = 2;
    vector<int> result = targetIndices(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}