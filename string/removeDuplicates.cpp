#include <bits/stdc++.h>
using namespace std;

// remove duplicate from string
//  brute force

string removeDuplicate(string s)
{
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < result.length(); j++)
        {
            if (s[i] == result[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            result += s[i];
        }
    }
    return result;
}

// using string find function
string removeDuplicate2(string s)
{
    string result = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (result.find(s[i]) == string::npos)
        {
            result += s[i];
        }
    }
    return result;
}

// using map

string removeDuplicate3(string s)
{
    string result = "";
    map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            m[s[i]] = 1;
            result += s[i];
        }
    }
    return result;
}

// using sort
string removeDuplicate4(string s)
{
    string result = "";
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            result += s[i];
        }
    }
    return result;
}

// using set
string removeDuplicate5(string s)
{
    string result = "";
    set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.insert(s[i]);
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        result += *it;
    }
    return result;
}

int main()
{
    string s = "geeksforgeeks";
    cout << removeDuplicate(s) << endl;
    cout << removeDuplicate2(s) << endl;
    cout << removeDuplicate3(s) << endl;
    cout << removeDuplicate4(s) << endl;
    cout << removeDuplicate5(s) << endl;
    return 0;
}