// https://leetcode.com/problems/number-of-senior-citizens/description/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  std::vector<std::string> details = {"7868190130M7522",
                                      "5303914400F9211",
                                      "9273338290F4010"};

  int count = 0;
  for (auto &detail : details)
  {
    int a = detail[11] - '0'; // '0' is subtracted to convert char to int
    int b = detail[12] - '0';

    int c = a * 10 + b;

    if (c > 60)
    {
      count++;
    }
  }
  cout << count << endl;
}