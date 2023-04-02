
// https://leetcode.com/problems/remove-element/
#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val) // if not val, then move it to the front
        {
            nums[j] = nums[i]; // move the non-val element to the front
            j++;              // increment the index of the front
        }
    }
    return j;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    int val = 0;
    int len = removeElement(nums, val);
    for (int i = 0; i < len; i++)
        cout << nums[i] << " ";
    return 0;
}