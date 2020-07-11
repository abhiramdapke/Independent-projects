#include <iostream>

using namespace std;

int fact(int n)
{
    // int res = 1; 
    // for (int i = 2; i <= n; i++) 
    //     res = res * i; 
    // return res; 
    //OR
    if (n==0) return 1;
    else return fact(n-1)*n;
} 

float comb(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n = 12;
    int r = 5;
    cout << "Combination expansion is "<< comb(n,r) << endl;

    return 0;
}
