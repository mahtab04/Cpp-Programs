// Problem Link => "https://www.codechef.com/problems/SMPAIR"


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    auto t;
    cin >> t;
    while (t--)
    {
        auto n;
        cin >> n;
        auto arr[n];
        for (auto i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        cout << arr[0] + arr[1] << endl;
    }
}