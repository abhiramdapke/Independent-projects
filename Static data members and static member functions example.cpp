#include <iostream>

using namespace std;

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
