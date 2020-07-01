#include <iostream>
//when global and local var have the same name, use scope resolution operator to access the global var
int x = 5;
using namespace std;

int main()
{
    int x = 8;
    cout<<"global var " << ::x << endl;
    cout << "local var " << x;

    return 0;
}
