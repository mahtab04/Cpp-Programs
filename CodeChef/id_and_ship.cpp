// Problem Link => https://www.codechef.com/problems/FLOW010

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char x;
        cin >> x;
        if (x == 'B' || x == 'b')
            cout << "BattleShip" << endl;
        else if (x == 'C' || x == 'c')
            cout << "Cruiser" << endl;
        else if (x == 'd' || x == 'D')
            cout << "Destroyer" << endl;
        else if (x == 'f' || x == 'F')
            cout << "Frigate" << endl;
    }
    // your code goes here
    return 0;
}