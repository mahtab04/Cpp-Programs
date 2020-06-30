//Problem link->https : //www.codechef.com/LRNDSA01/problems/CARVANS

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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        int speedCar = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (speedCar >= arr[i])
            {
                ans++;
                speedCar = arr[i];
            }
            else
            {
                //do nothing
            }
        }
        cout << ans << '\n';
    }
}
