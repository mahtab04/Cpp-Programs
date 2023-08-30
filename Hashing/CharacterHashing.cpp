#include <iostream>
using namespace std;

int main()
{
    string str = "mahtab";
    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }

    char ans = 'a';
    cout << hash[ans - 'a'] << endl;

   
}