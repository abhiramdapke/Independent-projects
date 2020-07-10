#include <iostream>
//This pointer/keyword
using namespace std;

class Entity
{
public:
    int x,y;
    Entity(int x, int y)
    {
        this->x = x;        //this is used to declare the data members to the parameters.
        this->y = y;        //It is used when they both are the same.
    }
    
    int getxy() const     //a const function cannot modify the class i.e. the x,y parameters
    {
        cout << "x is " <<  this->x << endl;
        cout <<  "y is " << this->y << endl;
    }
    
};

int main()
{
   Entity e(5,6);
   e.getxy();

    return 0;
}
