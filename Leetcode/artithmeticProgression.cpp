// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
  bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int flag = true;
        int diff = abs(arr[0]-arr[1]);
        for(int i=1;i<arr.size()-1;i++)
        {
            int temp = abs(arr[i]-arr[i+1]);
            if(temp!=diff)
            {
                flag = false;
                return flag;
            }
        }
        return flag;
    }

int main()
{
   vector<int>v = {3,5,1};
   std::cout << canMakeArithmeticProgression(v) << std::endl;
}