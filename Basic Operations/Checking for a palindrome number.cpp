#include <iostream>

using namespace std;

int main()
{
    int temp,n,r,sum=0;
    n = 5225;
    temp = n;
    while (n>0)
    {
        r = n%10;
        sum = sum*10 + r;
        n = n/10;
    }
    n = temp;
    if (n == sum)
        cout << "It is a palindrome number" << endl;
    else
        cout << "Not a palindrome number" << endl;

    return 0;
}
