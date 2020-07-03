#include <iostream>

using namespace std;
//1. Method 1: Taylor Series
int e(int x, int n)
{
    int s = 1;
    for (;n>0;n--)
    {
        s = 1 + (x/n)*s;
    }
    return s;
}


//2. Method 2: Taylor Series by Horner's rule
int e(int x, int n)
{
    static int s = 1;
    if (n ==0)
        return s;
    s = 1 + (x/n)*s;
    return e(x, n-1);
}

int main()
{
    int x = 2;
    int n = 4;
    cout << "Taylor series expansion by horner's rule of " << x << " is " << e(x,n) << endl;

    return 0;
}
