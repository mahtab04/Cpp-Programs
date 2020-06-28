//Problem Link = https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/mystery-20/

#include <bits/stdc++.h>
#include <iostream>
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
        long long int a;
        cin >> a;
        int count = 0;
        for (int i = 1; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                count += (i * i == a ? 1 : 2);
            }
        }

        cout << count << endl;
    }
}
