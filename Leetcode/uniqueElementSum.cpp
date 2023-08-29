// https://leetcode.com/problems/sum-of-unique-elements/description/
#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int> &nums)
{
    std::map<int, int> m;
    // insert all elements in map
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    int sum = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second == 1)
        {
            sum += it->first;
        }
    }
    return sum;
}

int main()
{

    vector<int> nums = {1, 2, 3, 2};
    cout << sumOfUnique(nums) << endl;
    return 0;
}