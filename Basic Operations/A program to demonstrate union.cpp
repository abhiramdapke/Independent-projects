
#include <iostream>

using namespace std;
//Union is an old uder-defined data-type. It is used when we want to work with only
//one variable

union un
{
    short a;
    short b;
};

int main()
{
    union un var;
    var.a = 4;
    cout << var.a << " " << var.b << endl;
    var.b = 8;
    cout << var.a << " " << var.b << endl;
    
    return 0;
}
