#include <iostream>

using namespace std;

/*Abstract class - A class that cannot be instantiated directly
1. Implemented as a class having one or more pure virtual functions which should be overriden 
by member fns of the derived classes.
2. We use abstract class when base class has no meaningufl purpose. It makes sense to use It
only in the derived class.
3. Example : Bank acc, savings acc, currrent acc.*/
class base
{
public:
    int id;
    float balance;
    virtual void call() = 0;        //Pure virtual function
    virtual void printinfo() = 0;   //Pure virtual function
};

class savings : public base
{
public:
    int age;
    long int ATM;
    void call()
    {
        cout << "Savings call" << endl;
    }
    void printinfo()
    {
        cout << "Savings" << endl;
    }
};

class current : public base
{
public:
    int amount;
    int overdraft;
    void call()
    {
        cout << "Current call" << endl;
    }
    void printinfo()
    {
        cout << "Current" << endl;
    }
};

int main()
{
    //base B     Compiler  Error - As we do not have definitions of the functions in the base 
                             //class, we cannot create an object of the base class
                            //as we have only pure virtual functions, though we can cr
                            //create a pointer to the base class
                            //base is an abstract class containing only pure virtual fns
    base *b;
    savings s;
    current c;
    
    b = &s;
    b->call();                  //invokes the savings functions
    b->printinfo();
    
    b = &c;
    b->call();                  //invokes the current functions
    b->printinfo();
    
    return 0;
}
