#include <iostream>
#include <string.h>

using namespace std;

//Operator  - we can use for doing tasks with pre-defined data types
//Operator overloading - we can use for doing tasks with user-defined data types
//Operator overloading - Using an operator instead of a function for a task
// ::, .*, sizeof(), conditional ?:  - cannot be overloaded
  
//Overloading '+' operator
//1. Using functions
class Test
{
    char st[100];
public:
    void read()
    {
        cout << "Enter string ";
        cin >> st;
    }
    void show()
    {
        cout << "String is " << st;
    }
    Test add(Test t2)   //explicit obj. t1 is already there as we are calling with t1
    {
        Test t3;
        strcpy(t3.st,st);
        strcat(t3.st," ");
        strcat(t3.st,t2.st);
        return t3;
    }
};

int main()
{
    Test t1,t2,t3;
    t1.read();
    t2.read();
    
    t3 = t1.add(t2);  //function calling
    t3.show();

    return 0;
}

//2. Using operator overloading
class Test
{
    char st[100];
public:
    void read()
    {
        cout << "Enter string ";
        cin >> st;
    }
    void show()
    {
        cout << "String is " << st;
    }
    Test operator +(Test t2)   //explicit obj. t1 is already there as we are calling with t1
    {
        Test t3;
        strcpy(t3.st,st);
        strcat(t3.st," ");
        strcat(t3.st,t2.st);
        return t3;
    }
};

int main()
{
    Test t1,t2,t3;
    t1.read();
    t2.read();
    
    t3 = t1 + t2;  //function calling
    t3.show();

    return 0;
}
