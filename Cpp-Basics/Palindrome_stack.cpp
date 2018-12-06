//Program to check string is palindrome or not using stack

#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

char stack[100];
int top = -1;

void push(char c)
{

    stack[++top]=c;


}
char pop()
{

    return(stack[top--]);
}


int main()
{

    char str[100];
    int i,count=0,len;

    cout<<"Enter the string to check it is palindrome or not: "<<endl;
    cin>>str;
    len = strlen(str);
    for(i=0; i<len; i++)
    {

        push(str[i]);
    }
    for(i=0; i<len; i++)
    {

        if(str[i]==pop())
            count++;
    }
    if(count == len)
    {
        cout<<"String is palindrome"<<endl;
    }
    else
    {
        cout<<"String Not Palindrome"<<endl;
    }

}
