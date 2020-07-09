#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *p;int *q;
    int i;
    p = new int[4];
    q = new int[10];
    p[0] = 1;p[1] = 2; p[2] = 3, p[3] = 4;
    
    for (i=0;i<=4;i++)
    {
        q[i] = p[i];
    }
    for (i=0;i<4;i++)
        cout <<q[i]<< endl;
 return 0;
}
