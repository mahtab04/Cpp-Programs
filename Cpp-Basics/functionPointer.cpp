// we should use function pointer when we want to pass a function as an argument to another function and
//  when we want to return a function from another function.
//  when the function to be invoked is not known at compile time, but is decided at runtime.

#include <iostream>
using namespace std;

int Add(int a, int b)
{
    return a + b;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 10;
    int b = 20;
    double c = 3.14;

    // create a function pointer
    int (*fp)(int, int) = &Add;

    // call the function
    cout << fp(a, b) << endl;

    // change the function pointer to point to max
    fp = &max;

    // call the function
    cout << fp(a, b) << endl;
    cout << (*fp)(a, b) << endl;
}
