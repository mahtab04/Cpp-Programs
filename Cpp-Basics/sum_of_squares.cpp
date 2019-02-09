// Write a recursive function that returns the sum of the square
// of the first n positive integers.


#include <iostream>
using namespace std;

long int sum(long int a)
{
    if (a == 0)
        return 0;
    return sum(a - 1) + a * a;
}
int main(){
    int n=5;
    cout<<sum(5)<<endl;
}
