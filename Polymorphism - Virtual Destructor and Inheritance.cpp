#include <iostream>

using namespace std;

/*When we use a virtual destructor, we can call the destructor of the derived class B
before invoking the destructor of the base class A which was not possible otherwise and 
we would be left with non- deallocated memory in the derived class*/
class A
{
public:
    A()
    {
        cout << "A" << endl;
    }
    virtual ~A()
    {
        cout << "~A" << endl;
    }
};

class B : public A
{
    int *z;
public:
    B()
    {
        z = new int;
        cout << "B" << endl;
    }
    ~B()
    {
        cout << "~B" << endl;
        delete z;
    }
};

int main()
{
    A *ptr;
    ptr = new B;
    delete ptr;
    
    return 0;
}

/*O/P:
A
B
~B
~A*/
