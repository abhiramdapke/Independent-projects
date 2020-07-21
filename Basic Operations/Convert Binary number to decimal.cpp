#include <iostream>
#include <algorithm>
using namespace std;


int binarytodecimal(int n)
{

    int decimal = 0;
    
    int base = 1;
    
    int temp = n;
    while (temp)
    {
        int last_digit = temp%10;
        temp = temp/10;
        decimal+= last_digit * base;
        base = base*2;
    }
    return decimal;
}

int main()
{
    int num = 1010100101;
    cout << binarytodecimal(num);

    return 0;
}
