#include <iostream>
#include <conio.h>
using namespace std;

//We use static member functions only to work with static data members.
/*
1. Static data members are class members that are declared using the static keyword.
2. There is only one copy of the static data member in the class, even if there are many class objects. 
3. This is because all the objects share the static data member.
4. The static data member is always initialized to zero when the first class object is created.

1. A static member function is a special member function, which is used to access only static data members,
 any other normal data member cannot be accessed through static member function.
2. Just like static data member, static member function is also a class function;
 it is not associated with any class object.
*/

class Test
{
public:
    static void read(int x, int y)  // Static member function - can be called with the object name and the class name
    {
        if (x>y) cout << "X is big" << endl;
        else if (y>x) cout <<  "Y is big" << endl;
        else cout << "Both are same" <<  endl;
    }
};

int main()
{
   Test t1;
   t1.read(10,2);
   Test::read(20,38);   //static member functions can be called with the class name
   Test::read(9,9);

    return 0;
}

//Another example
#include <iostream>
#include <conio.h>
using namespace std;

//We use static member functions only to work with static data members
class Test
{
    static int a,b;
public:
    static void getdata()  // Static member function - are used to access static data members of the same class so we declare static data members in private
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};
int Test::a;
int Test::b;

int main()
{
   Test t1;
   t1.getdata();

    return 0;
}
