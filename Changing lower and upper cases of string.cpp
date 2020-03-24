
#include <iostream>

using namespace std;

//Changing cases of alphabets
//97-65 = 32
int main()
{
    string a = "WeLComE here";
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>='A' && a[i]<='Z')
            a[i] = a[i] + 32;
        else if (a[i]>='a' && a[i]<='z')
            a[i] = a[i] - 32;
    }
    cout << a;

    return 0;
}

