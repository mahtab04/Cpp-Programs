
// https://www.codechef.com/problems/ERROR

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)

    {

        std::string str;

        cin >> str;

        std::string::size_type a1 = str.find("010");

        std::string::size_type a2 = str.find("101");

        if ((std::string::npos == a1) && (std::string::npos == a2))

        {

            cout << "Bad"
                 << "\n";
        }

        else
        {

            cout << "Good"
                 << "\n";
        }
    }

    return 0;
}
