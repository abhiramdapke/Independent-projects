#include <iostream>

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

class Point
{
    int x,y;
    static int count;       //Declaration of static private data member
public:
    Point()
    {
        count++;
    }
    Point(double a,double b)
    {
        x = a;
        y = b;
        count++;
    }
    static void resetcount()
    {
        count = 0;
        return;
    }
    void printcount()
    {
        cout << count << endl;
        return;
    }
};
int Point::count;       //Creation of a static private data member

int main()
{
    Point::resetcount();
    Point a,b,c(0.00,0.00);
    cout << "Count of points ";
    a.printcount();

    return 0;
}
