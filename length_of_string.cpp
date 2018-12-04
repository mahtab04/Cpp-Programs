#include <iostream>

using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char string[100];
    cout << "Enter any string: ";
    cin.getline(string, 20);
    cout << "The length of string is: " << length(string);
}