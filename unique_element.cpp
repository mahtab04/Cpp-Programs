//Given: An array A with all elements occuring twice except for x that occur once.


#include<iostream>
#include <bits/stdc++.h>
#define maxsize 10000
using namespace std;

int main()
{



    int n;
    int arr[maxsize];
    int unique_ele =0;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        unique_ele ^=arr[i];
    }
    cout<<"The unique element is: "<< unique_ele;


}


