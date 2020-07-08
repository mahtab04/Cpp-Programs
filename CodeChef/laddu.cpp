//Problem Link ->https://www.codechef.com/LRNDSA01/problems/LADDU

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int activity, laddus = 0;
        string origin;
        cin >> activity >> origin;
        for (int i = 0; i < activity; i++)
        {
            string str;
            cin >> str;
            if (str == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                laddus += 300;
                if (rank <= 20)
                {
                    laddus += 20 - rank;
                }
            }
            else if (str == "TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            else if (str == "BUG_FOUND")
            {
                int severity;
                cin >> severity;
                laddus += severity;
            }
            else if (str == "CONTEST_HOSTED")
            {
                laddus += 50;
            }
            else
            {
                //nothing
            }
        }
        int months = 0;
        if (origin == "INDIAN")
        {
            months = laddus / 200;
        }
        else
        {
            months = laddus / 400;
        }
        cout << months << endl;
    }
}
