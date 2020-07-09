
#include <iostream>

using namespace std;
//finding number of words  by counting spaces
int main()
{
    string a = "WeLComE here guys, how are you?";
    int i; int word = 1;   //we take 1 as we are counting spaces
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i] == ' ' && a[i-1]!=' ')
            word++;
    }
    cout << "Number of words are " << word;

    return 0;
}
