#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"Enter ele" << endl;
    cin >> a;
    cout << "Enter ele" << endl;
    cin >> b;

    c = a +(~b+1);
    
    cout << c;
    
    return 0;
}
