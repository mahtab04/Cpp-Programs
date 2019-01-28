#include <iostream>
using namespace std;
string reverse(string);
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << " Reverse: " << reverse(s) << "\n";
}

string reverse(string s)
{
    string r = s;
    int len = s.length();
    for (int i = 0; i < len; i++)
        r[i] = s[len - 1 - i];
    return r;
}
