#include <iostream>


using namespace std;

int main()
{
    char c;
    float a,b;
    cout << "Enter two numbers";
    cin >> a >> b;
    cout << "Enter an operator + - * /";
    cin >> c;
    
    switch (c)
    {
        case '+' : cout << a+b;
                   break;
        case '-' : cout << a-b;
                   break;
        case '*' : cout << a*b;
                   break;
        case '/' : cout << a/b;
                   break;
        default: cout << "Error! Invalid";   
    }

    return 0;
}
