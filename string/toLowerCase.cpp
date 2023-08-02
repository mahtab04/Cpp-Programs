// https://leetcode.com/problems/to-lower-case/description/
#include <bits/stdc++.h>
using namespace std;

string toLower(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    return s;
}

string toLower2(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

string toLower3(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string s = "Hello World";
    cout << toLower(s) << endl;
    cout << toLower2(s) << endl;
    cout << toLower3(s) << endl;
    return 0;
}
