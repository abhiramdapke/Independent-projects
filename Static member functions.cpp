#include <iostream>
#include <conio.h>
using namespace std;

//We use static member functions only to work with static data members
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
