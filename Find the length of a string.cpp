
//Method 1
#include <iostream>

using namespace std;

int main()
{
    char str[] = "Welcome";
    int i;
    for (i=0;str[i]!='\0';i++)
    {}
    cout<< "Length of a string is " << i << endl;

    return 0;
}

//Method 2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Welcome";
    cout<< "Length of a string is " << s.size() << endl;

    return 0;
}
