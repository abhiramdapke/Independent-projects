#include <iostream>

using namespace std;

int count(int n)
{
    if (n==0 || n== 1)
        return 1;
    else
        return count(n-2) + count(n-1);
}

int main()
{
    int n = 4;
    cout << count(n) << endl;

    return 0;
}
