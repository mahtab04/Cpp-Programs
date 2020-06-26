// Link->https: //cses.fi/problemset/task/1069/

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 1, c = 0;
    char l = 'A';
    for (char d : s)
    {
        if (d == l)
        {
            ++c;
            ans = max(c, ans);
        }
        else
        {
            l = d;
            c = 1;
        }
    }
    cout << ans;
}
