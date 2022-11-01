// https://www.codechef.com/problems/CHN15A
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((arr[i] + k) % 7 == 0)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
