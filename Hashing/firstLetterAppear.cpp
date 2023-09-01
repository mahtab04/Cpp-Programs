// https://leetcode.com/problems/first-letter-to-appear-twice/description/
#include <bits/stdc++.h>
using namespace std;

char repeatedCharacter(string s)
{
    map<char, int> m;
    char ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (m.count(s[i]) <= 0)
        {
            m[s[i]]++;
        }
        else
        {
            ans = s[i];
            break;
        }
    }
    return ans;
}

int main()
{

    string s = "abccbaacz";
    cout << repeatedCharacter(s);
    return 0;
}