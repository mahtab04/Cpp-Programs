#include <bits/stdc++.h>
using namespace std;

string C_Sum(vector<int> v, int target)
{
    sort(v.begin(), v.end());
    int i = 0;
    int j = v.size() - 1;
    while (i != j)
    {
        int sum = v[i] + v[j];
        if (sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            return "Yes";
        }
    }
    return "No";
}

int main()
{
    vector<int> v = {8, 5, 6, 4, 3, 1};
    int target = 7;
    cout << C_Sum(v, target);
    return 0;
}