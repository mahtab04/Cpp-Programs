#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/* Function to get no of set bits in binary
   representation of passed binary no. */
unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}

int main(){
int n;
cout<<"Enter the number: "<<endl;
cin>>n;
cout<<"The no of set bits in given digit is: "<<countSetBits(n);


}
