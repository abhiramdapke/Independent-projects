
#include <iostream>

using namespace std;

//convert upper case to lowercase alphabets
//97-65 = 32
int main()
{
    string a = "WELCOME";
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        a[i] = a[i] + 32;
    }
    cout << a;

    return 0;
}


//convert lower case to uppercase alphabets
//97-65 = 32
int main()
{
    string a = "welcome";
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        a[i] = a[i] - 32;
    }
    cout << a;

    return 0;
}
