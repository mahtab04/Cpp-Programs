#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the array size: \n";
    cin>>size;
    int a[10], b[100];
    cout << "Enter a the array elements: \n";
    for(int i=0;i<size;i++)
    {
        
        cin >> a[i];
    }
    int j = 0;
    for(int i=0;i<size;i++)
    {
        b[i] = a[j];
        j++;
    }
    cout<<"Copied array elements:\n";
    for(int i=0;i<size;i++)
    {
        cout << b[i] << "\n";
    }
    return 0;
}