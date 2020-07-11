#include <iostream>

using namespace std;

class base
{
public:
    int id;
    base(int x) : id(x){}       //Base constructor
    base & operator=(base &a)   //Assignment operator overloaded
    {
        id = a.id;
        cout << "base class operator" << endl;
        return *this;
    }
};

class savings : public base
{
public:
    int age;
    savings(int x, int y) : base(x),age(y) {}   //Derived class constructor and initializer list
};

int main()
{
    base b1(10);
    savings s1(11,23), s2(12,32);
    b1 = s1;            //b1.operator=(s1)      base class yes
    //s2 = b1;          //This is a wrong statement      savings class no

    return 0;
}
