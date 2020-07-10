#include <iostream>

/* Virtual class - It is used in hybrid inheritance when a derived class cannot
have two copies of objects of two classes, we declare them as virtual class
*/
using namespace std;

class c1   //base class
{
public:
    void c1fun()
    {
        cout << "C1 class function " << endl;
    }
};

class c2:public virtual c1
{
public:
    void c2fun()
    {
    cout << "C2 class function " << endl;
    }
};

class c3:public virtual c1
{
public:
    void c3fun()
    {
    cout << "C2 class function " << endl;
    }
};

class c4:public c2,public c3
{
public:
    void c4fun()
    {
    cout << "C2 class function " << endl;
    }
};

int main()
{
    c4 obj;
    obj.c1fun();
    obj.c2fun();
    obj.c3fun();
    obj.c4fun();
    

    return 0;
}
