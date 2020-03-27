
#include <iostream>
#include <string>

using namespace std;

int main()
{
   char a[] = "painter";
   char b[] = "painting";
   
   int i,j;
   for (i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++)
   {
       if (a[i]!=b[j])
        break;
   }
   if (a[i] == b[j]) cout << "Equal" << endl;
   else if (a[i] < b[j]) cout << "A is smaller" << endl;
   else cout << "B is smaller" << endl;
    
    return 0;
}
