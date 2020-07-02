#include <iostream>
//copy constructor - used to initialize one object with another of the same class.
//used in operator overloading.
//copy constructors are having reference type parameters.
using namespace std;

class Sample
{
    int a,b;
public:
    Sample(int a, int b)        //parameterised constructor
    {
        this->a = a;
        this->b = b;
    }
    
    Sample(Sample &s1)          //copy constructor
    {
        a = s1.a;
        b = s1.b;
    }
    
    void print()
    {
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    } 
};

int main()
{
  Sample s1(10,20);     //invoke parameterized constructor
  Sample s2(s1);        //invokes copy constructor
  s1.print();
  cout << endl;
  s2.print();
  
  return 0;
}
