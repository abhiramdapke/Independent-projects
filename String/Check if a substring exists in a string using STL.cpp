#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str ("There are two needles in this haystack.");
    string str2 ("needaleasd");
    
    if (str.find(str2) != string::npos)
        cout << "String found";
    else
        cout << "String not found";

    return 0;
}
