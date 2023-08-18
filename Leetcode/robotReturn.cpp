// https://leetcode.com/problems/robot-return-to-origin/description/
#include <bits/stdc++.h>
using namespace std;

bool judgeCircle(string moves)
{
    int Ucount = 0, Dcount = 0, Lcount = 0, Rcount = 0;
    for (char &ch : moves)
    {
        if (ch == 'U')
            Ucount++;
        if (ch == 'D')
            Dcount++;
        if (ch == 'L')
            Lcount++;
        if (ch == 'R')
            Rcount++;
    }

    if (Ucount == Dcount && Lcount == Rcount)
        return true;
    else
        return false;
}

int main()
{
    string moves = "UD";
    cout << judgeCircle(moves) << endl;
    return 0;
}