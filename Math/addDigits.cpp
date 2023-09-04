// https://leetcode.com/problems/add-digits/description/
#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{
    int sum = 0;
    //keep adding until number becomes single digit
    while (num > 0 || sum > 9)
    {
        if (num == 0)
        {
            num = sum;
            sum = 0;
        }
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{

   
    cout<<addDigits(38);
    return 0;
}