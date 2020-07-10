#include <iostream>

using namespace std;

class A
{
public:
    static int x;       //Since x is a static variable, for every obj we create, 
    A()                 //it will be shared(here, increment) the value of x
    {
        x++;
    }
    ~A()
    {
        x--;
    }
};
int A::x = 0;               //always define the static variable after the class

int main()
{
    A a,b;              //2 obj created , local obj created in stack
    A c,d,e;            //3 obj created
    
    A* ptr =  new A;    //dynamic object,  calls the constructor , dynamic obj created in heap
    delete ptr;         //calls the destructor
    return 0;
}
