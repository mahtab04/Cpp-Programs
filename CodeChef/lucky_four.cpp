// problem link->"https://www.codechef.com/problems/LUCKFOUR"



#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int num, count = 0;
        cin >> num;
        while (num != 0)
        {
            if ((num % 10) == 4)
                count++;
            num = num / 10;
        }
        cout << count << endl;
    }
    return 0;
}
