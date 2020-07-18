#include <iostream>
#include <string>
using namespace std;

//Non duplicate letters in the string
int main()
{
   char a[] = "decimal";
   char b[] = "medicnl";
   int i, H[26] = {0};
   if (sizeof(a)/sizeof(a[0])!= (sizeof(b)/sizeof(b[0])))
   {
    cout <<"Not an anagram" << endl;
    exit(0);
   }
   
   for (i=0;a[i]!='\0';i++)
   {
       H[a[i] - 97]++;
   }
   for (i=0;b[i]!='\0';i++)
   {
       H[b[i]-97]--;
       if ((H[a[i] - 97] < 0) || (H[a[i]-97] > 0))
       {
        cout << "not anagram" << endl;
        break;
        }
   }
   if (b[i] == '\0')
    cout << "It is an anagram";

    return 0;
}
