#include <iostream>

using namespace std;

// Use XOR gate
//0 for equal and 1 for not equal
int functionwithoutoperators(int x, int y)
{
    return !(x^y);
}

int main()
{
    int a,b;
    cout << "Enter twp no.s";
    cin >> a >> b;
    
    if (functionwithoutoperators(a,b))
        cout << "a is equal to b "<< endl;
    else    
        cout << "a is not equal to b " << endl;

    return 0;
}
