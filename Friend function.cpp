#include <iostream>
#include <conio.h>
using namespace std;

class Sample
{
    int a,b;
    friend void print(Sample); //Syntax: friend return-type function(obj)
};

void print(Sample s)
{
    s.a = 10;   // call using membership operator
    s.b = 20;
    cout << "a is " <<s.a << endl;
    cout << "b is " <<s.b << endl;
}

int main()
{
    Sample s;
    print(s);

    return 0;
}
