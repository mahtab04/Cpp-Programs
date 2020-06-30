//Problem Link -> https://www.codechef.com/LRNDSA01/problems/LAPIN

#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int lFreq[26] = {0}, rFreq[26] = {0};
        for (int i = 0; i < s.length() / 2; i++)
        {
            char curr = s[i];
            lFreq[curr - 97]++;
        }
        for (int i = (s.length() + 1) / 2; i < s.length(); i++)
        {
            char curr2 = s[i];
            rFreq[curr2 - 97]++;
        }
        // for (auto x : lFreq)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        // for (auto x : rFreq)
        // {
        //     cout << x << " ";
        // }
        bool islapindrome = true;
        for (int i = 0; i < 26; i++)
        {
            if (lFreq[i] != rFreq[i])
            {
                islapindrome = false;
                break;
            }
        }

        if (islapindrome)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
