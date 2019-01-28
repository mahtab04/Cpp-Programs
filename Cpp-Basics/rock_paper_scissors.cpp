#include <iostream>
#include <cstdlib>
using namespace std;
enum Choice
{
    PAPER,
    SCISSORS,
    ROCK
};
enum Result
{
    YOU,
    ME,
    TIE
};
int main()
{
    Choice yours, mine;
    Result winner = YOU;
    string s;
    cout << "Choose either rock, scissors, or paper (R/P/S): ";
    cin >> s;
    switch (s[0])
    {
    case 'R':
    case 'r':
        yours = ROCK;
        break;
    case 'S':
    case 's':
        yours = SCISSORS;
        break;
    case 'P':
    case 'p':
        yours = PAPER;
        break;

    default:
        yours = ROCK;
    }
    int n = rand();
    switch (n % 3)
    {
    case 0:
        mine = PAPER;
        cout << "I choose paper. \n";
        break;
    case 1:
        mine = SCISSORS;
        cout << "I choose scissors. \n";
        break;
    case 2:
        mine = ROCK;
        cout << "I choose rock. \n";
        break;
    }
    if (yours == mine)
        winner = TIE;
    if (yours == PAPER && mine == SCISSORS || yours == SCISSORS && mine == ROCK || yours == ROCK && mine == PAPER)
        winner = ME;
    switch (winner)
    {
    case YOU:
        cout << "You won!\n";
        break;
    case ME:
        cout << "I won!\n";
        break;
    case TIE:
        cout << "We Tied!\n";
    }
}