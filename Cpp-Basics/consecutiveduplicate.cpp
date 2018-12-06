<<<<<<< HEAD
/*Given a string, remove all the consecutive duplicates that are present in the given string.
That means, if 'aaa' is present in the string then it should become 'a' in the output string.

sample input:
aabccbaa

output:
abcba*/



#include<iostream>
#include<cstring>
using namespace std;


void remove(char input[])
{
    int j=0;
    for(int i=1; input[i]!='\0'; i++)
    {
        if(input[j]!=input[i])
        {
            j++;
            input[j]=input[i];
        }
    }
    j++;
    input[j]='\0';
}
int main()
{

    char a[100];
    cin.getline(a,30);
    remove(a);
    cout<<a;
    return 0;




}















=======
/*Given a string, remove all the consecutive duplicates that are present in the given string.
That means, if 'aaa' is present in the string then it should become 'a' in the output string.

sample input:
aabccbaa

output:
abcba*/



#include<iostream>
#include<cstring>
using namespace std;


void remove(char input[])
{
    int j=0;
    for(int i=1; input[i]!='\0'; i++)
    {
        if(input[j]!=input[i])
        {
            j++;
            input[j]=input[i];
        }
    }
    j++;
    input[j]='\0';
}
int main()
{

    char a[100];
    cin.getline(a,30);
    remove(a);
    cout<<a;
    return 0;




}















>>>>>>> d8f5f9cea559bbb436106240e8c114bdd4170650
