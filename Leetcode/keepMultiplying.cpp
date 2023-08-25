// https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/

#include <bits/stdc++.h>
using namespace std;

int findFinalValue(vector<int> &nums, int original)
{
    int result = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == original)
        {
            result = original * 2;
            original = result;
            
        }
        
    }
    return original;
}

int main()
{
    vector<int> nums = {5, 3, 6, 1, 12};
    int original = 3;
    cout << findFinalValue(nums, original) << endl;
    return 0;
}