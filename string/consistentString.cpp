// https://leetcode.com/problems/count-the-number-of-consistent-strings/description/
#include <bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    int count = 0;
    for (auto word : words)
    {
        bool flag = true;
        for (auto ch : word)
        {
            if (allowed.find(ch) == string::npos)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            count++;
    }
    return count;
}

int main()
{

    string allowed = "ab";
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};
    cout << countConsistentStrings(allowed, words) << endl;
    return 0;
}