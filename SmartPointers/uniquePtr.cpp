// Smart Poniters: It is a class which wraps a C++ pointer and overloads the * and -> operators.
// It is a class template in C++ STL. It is available in C++11 and above.

// unique_ptr: It is a smart pointer which is used to wrap a C++ object and store a pointer to that object.
// It ensures that the object to which it points gets destroyed automatically when the control leaves a block.
// It cannot be copied to another unique_ptr, cannot be assigned to another unique_ptr.
// It can be moved to another unique_ptr using std::move. after moving, the source pointer becomes empty.
// It can be created by calling make_unique function.

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
    unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << endl;
    unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr); // ptr is now empty and ptr2 owns the Rectangle object
    cout << ptr2->area() << endl;

    // uisng make_unique
    unique_ptr<Rectangle> ptr3 = make_unique<Rectangle>(10, 5);

    cout << ptr3->area() << endl;

    // all the above pointers will be destroyed automatically when the control leaves the block
    return 0;
}