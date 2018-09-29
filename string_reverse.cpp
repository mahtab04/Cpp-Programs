// Program to reverse a given string 

// ps = This is not the best method 



#include<iostream>
#include<cstring>
using namespace std;
void reverse(char input[])
{

    int len = strlen(input);

    int i=0, j =len-1;
    while(i<j)
    {
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;


    }

}

int main()
{

    char str[100];

    cout<<"Enter the string to reverse: "<<endl;
    cin>>str;

    reverse(str);
    cout<<"The reversed string is: "<<str;



}
