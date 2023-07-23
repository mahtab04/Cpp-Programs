// shared_ptr is a smart pointer which can be used to share the same object among multiple pointers
// such that object gets destroyed only when all the pointers pointing to that object gets destroyed.
// It uses reference counting to maintain how many pointers are pointing to the same object.
// It is available in C++11 and above.
// It can be created by calling make_shared function.
// It can be copied to another shared_ptr, can be assigned to another shared_ptr.
// It can be moved to another shared_ptr using std::move. after moving, the source pointer becomes empty.

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
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    // GET THE NUMBER OF POINTERS POINTING TO THE OBJECT
    cout << "ptr.use_count()" << ptr.use_count() << endl;

    cout << ptr->area() << endl;
    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr; // ptr and ptr2 now owns the Rectangle object
    cout << ptr2->area() << endl;

    // GET THE NUMBER OF POINTERS POINTING TO THE OBJECT

    cout << "ptr.use_count()" << ptr.use_count() << endl;

    // uisng make_shared
    shared_ptr<Rectangle> ptr3 = make_shared<Rectangle>(10, 5);

    cout << ptr3->area() << endl;
    shared_ptr<Rectangle> ptr4(ptr3); // ptr3 and ptr4 now owns the Rectangle object

    // GET all pointers address
    cout << "ptr.get()" << ptr.get() << endl; // get() returns the address of the object
    cout << "ptr2.get()" << ptr2.get() << endl;
    cout << "ptr3.get()" << ptr3.get() << endl;
    cout << "ptr4.get()" << ptr4.get() << endl;
    return 0;
}