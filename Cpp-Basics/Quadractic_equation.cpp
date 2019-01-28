#include <iostream>
#include <cmath>
using namespace std;
typedef double dd;
int main()
{
    dd a, b, c;
    cout << "Enter the cofficients of quadractic equation: " << endl;
    cout << "\ta: ";
    cin >> a;
    cout << "\tb: ";
    cin >> b;
    cout << "\tc: ";
    cin >> c;
    cout << "The equation is: " << a << "*x*x + " << b << "*x + " << c << "=0\n";
    dd d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << "The discriminant ,d= " << d << " < 0, so there are no real solutions.\n";
        return 0;
        }
    dd sqrtd = sqrt(d);
    dd x1 = (-b + sqrtd) / (2 * a);
    dd x2 = (-b - sqrtd) / (2 * a);
    cout << "The solutions are: \n";
    cout << "\tx1 = " << x1 << endl;
    cout << "\tx2 = " << x2 << endl;
    cout << "Check:";
    cout << "\ta*x1*x1 + b*x1 + c = " << a * x1 * x1 + b * x1 + c;
    cout << "\n\ta*x2*x2 + b*x2 + c = " << a * x2 * x2 + b * x2 + c;
}