//https: // www.codechef.com/problems/CNOTE

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        int no_of_page_req = x - y;
        int t_1 = n;
        bool ans = false;
        while (t_1--)
        {
            int pi, ci;
            cin >> pi >> ci;

            if (pi >= no_of_page_req && ci <= k)
                ans = true;
        }
        if (ans)
            cout << "LuckyChef"
                 << "\n";
        else
            cout << "UnluckyChef"
                 << "\n";
    }
}
