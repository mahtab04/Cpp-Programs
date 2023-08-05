// https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "mahtab alam";

    stringstream ss(s);
    string temp, ans;
    while (ss >> temp)
    {
        reverse(temp.begin(), temp.end());
        ans += (temp + " ");
    }

    // remove last space
    ans.pop_back();
}

// Time Complexity: O(n)
// Space Complexity: O(n)