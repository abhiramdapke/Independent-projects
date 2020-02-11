#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<string> back_stack;   // for the back button
    string temp;    // for the web address
    
    while(temp!="exit")
    {
        cout<< "[1] Visit URL     [2] Back" << endl;
        cin >> temp;
        if (temp == "exit")
            break;
        if (temp == "1")
        {
            cout << "enter URL: ";
            cin >> temp;
            back_stack.push(temp);
        }
        else if (temp == "2")
        {
            cout << "Going back ...\n";
            back_stack.pop();
        }
        if (back_stack.empty())
            break;
        cout << "Current URL: " << back_stack.top() << endl;
    }
}
