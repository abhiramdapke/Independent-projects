#include <iostream>

using namespace std;

int main()
{
    int *p = new int[3];
    p[0] = 1; p[1] = 2; p[2] = 6; 
    
    int *q = new int[6];
    
    for (int i=0;i<3;i++)
    {
        q[i] = p[i];
    }
    delete []p;
    p = q;
    q = NULL;
    
    return 0;
}
