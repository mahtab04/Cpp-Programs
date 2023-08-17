// https://leetcode.com/problems/baseball-game/description/
#include <bits/stdc++.h>
using namespace std;

int calPoints(vector<string> &operations)
{
    vector<int> scoreCard;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "+")
        {
            scoreCard.push_back(scoreCard[scoreCard.size() - 1] + scoreCard[scoreCard.size() - 2]);
        }
        else if (operations[i] == "D")
        {
            scoreCard.push_back(2 * scoreCard[scoreCard.size() - 1]);
        }
        else if (operations[i] == "C")
        {
            scoreCard.pop_back();
        }
        else
        {
            scoreCard.push_back(stoi(operations[i]));
        }
    }

    int sum = 0;
    for (int i = 0; i < scoreCard.size(); i++)
    {
        sum += scoreCard[i];
    }
    return sum;
}

int main()
{
    vector<string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << calPoints(operations) << endl;
    return 0;
}