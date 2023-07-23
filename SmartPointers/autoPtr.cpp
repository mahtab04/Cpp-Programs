//auto_ptr is deprecated in C++11 and removed in C++17. It is not recommended to use auto_ptr.
// auto_ptr is a smart pointer which manages an object obtained via new expression and deletes that object 
//when auto_ptr itself is destroyed.
// It is available in C++98 and C++03.
// It can be created by calling make_shared function.
// It can be copied to another auto_ptr, can be assigned to another auto_ptr.
// It can be moved to another auto_ptr using std::move. after moving, the source pointer becomes empty.
// It can be used in STL containers.
// It cannot be used in STL algorithms.

#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    auto_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << endl;
    auto_ptr<Rectangle> ptr2;
    ptr2 = ptr; // ptr now becomes empty
    cout << ptr2->area() << endl;
    return 0;
}
