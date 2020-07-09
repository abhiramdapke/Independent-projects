#include <iostream>

using namespace std;

int main()
{
    int n,r,temp,sum=0;
    cout << "Enter a number" << endl;
    cin >> n;
    temp = n;
    while (n>0)
    {
        r = n%10;
        sum = sum*10 + r;
        n = n/10;
    }
    n = temp;
    if (n == sum)
        cout << "Number is a palindrome" << endl;
    else
        cout << "Number is not a plaindrome" << endl;

    return 0;
}
