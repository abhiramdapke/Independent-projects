#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a[5] = {1,2,4,5,6};
    int *p;
    int i;
    
    p = new int[5];
    p[0] = 1;p[1] = 5;p[2] = 6; p[3] = 5; p[4] = 6;
    
    for (i=0;i<5;i++)
    {
     cout << a[i] <<endl;   
    }
    
    for (i=0;i<5;i++)
    {
        cout << p[i] << endl;
    }
    
 return 0;
}
