#include<iostream>
using namespace std;
int gcd(int a,int b)
{


    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


int main()

{
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Gcd of given numbers is: "<<gcd(a,b)<<endl;

}
