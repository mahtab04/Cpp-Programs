// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
#include <iostream>
#include <string>
using namespace std;

int strFind(string input, string check)
{
    auto ans = input.find(check);
    if (std::string::npos == ans)
    {
        return -1;
    }
    return ans;
}

int main()
{
    string str = "sadbutsad";
    string check = "sad";
    cout << strFind(str, check) << endl;
}