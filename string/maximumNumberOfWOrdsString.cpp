// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str[] = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};

    int maxNumberofWords = 0;
    for (string &s : str)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            //if found any space or last word then increase the count
            if (s[i] == ' ' || i == s.size() - 1)
            {
                count++;
            }
        }
        maxNumberofWords = max(maxNumberofWords, count);
    }

    cout << maxNumberofWords << endl;
}
