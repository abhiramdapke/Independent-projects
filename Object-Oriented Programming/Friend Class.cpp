#include <iostream>
#include <conio.h>
using namespace std;

// Composition - declaring obj of one class in another class. Uses reusability
class Test1    //container class
{
    int a,b;
public:
    void getab()
    {
        a = 10;
        b = 20;
    }
    friend class Test2; //Syntax: friend class name-of-class
};

class Test2    //contained class
{
public:
    void putab(Test1 t1)
    {
    cout << "a is " <<t1.a << endl;
    cout << "b is " <<t1.b << endl;
    }
};

int main()
{
    Test1 t1;
    Test2 t2;
    t1.getab();
    t2.putab(t1);

    return 0;
}
