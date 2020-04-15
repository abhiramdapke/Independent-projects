#include <iostream>

using namespace std;

//3 classes haivng same printinfo function

class base
{
public:
    int id;
    float balamce;
    void printinfo()
    {
        cout << "Base" <<  endl;
    }
};

class Savings : public base
{
public:
    int age;
    int ATM;
    void printinfo()
    {
        cout << "Savings" << endl;
    }
};

class Current : public base
{
public:
    int amount;
    int overdraft;
    void printinfo()
    {
        cout << "Current" << endl;
    }
};

int main()
{
    base b; Savings s; Current c;
    
    base *bptr;
    bptr = &s;
    
    bptr->printinfo();          //This will invoke the base printinfo. O/P = base
    
    bptr = &c;
    bptr->printinfo();          //This will invoke the base printinfo. O/P = base

    return 0;
}

//What is we want to invoke printinfo of the savings or the current class, we use virtual functions
//Virtual functions essentially implement polymorphism in the class.
//Virtual functions are used to achieve run-time polymorphism.


class base
{
public:
    int id;
    float balamce;
    virtual void printinfo()            //Change in this line
    {
        cout << "Base" <<  endl;
    }
};

class Savings : public base
{
public:
    int age;
    int ATM;
    void printinfo()
    {
        cout << "Savings" << endl;
    }
};

class Current : public base
{
public:
    int amount;
    int overdraft;
    void printinfo()
    {
        cout << "Current" << endl;
    }
};

int main()
{
    base b; Savings s; Current c;
    
    base *bptr;
    bptr = &s;
    
    bptr->printinfo();          //This will invoke the savings printinfo. O/P = savings
    
    bptr = &c;
    bptr->printinfo();          //This will invoke the savings printinfo. O/P = savings

    return 0;
}

/*In this case, though the main functinois same, the compiler determines at run time
whether savings or current gets allocated to the bptr and prints the same */
