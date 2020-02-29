#include <iostream>

using namespace std;

//Operator  - we can use for doing tasks with pre-defined data types
//Operator overloading - we can use for doing tasks with user-defined data types
//Operator overloading - Using an operator instead of a function for a task
// ::, .*, sizeof(), conditional ?:  - cannot be overloaded
  
//1. Using functions
class Test
{
    int a;
public:
    void get()
    {
        cin >> a;
    }
    void compare(Test t2)   //passing second obj
    {
        if (a == t2.a) cout << "Objects are equal";
        else cout << "Objects are not equal";
    }
};

int main()
{
    Test t1,t2;
    cout << "Enter t1 obj value ";
    t1.get();
    cout << "Enter t2 obj value ";
    t2.get();
    
    t1.compare(t2);  //function calling

    return 0;
}

//2. Using operator overloading
class Test
{
    int a;
public:
    void get()
    {
        cin >> a;
    }
    void operator ==(Test t2)   //passing second obj
    {
        if (a == t2.a) cout << "Objects are equal";
        else cout << "Objects are not equal";
    }
};

int main()
{
    Test t1,t2;
    cout << "Enter t1 obj value ";
    t1.get();
    cout << "Enter t2 obj value ";
    t2.get();
    
    t1==t2;  //function calling

    return 0;
}
