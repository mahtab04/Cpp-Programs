#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int num;
    int hash[13] = {0}; // array of size 13 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    cin >> num;
    

    cout << hash[num];


    //uisng map
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    cout << m[num];
}