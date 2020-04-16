#include <iostream>
#include <stack>
using namespace std;

stack<int> sortstack(stack<int> &s1)
{
    stack<int> s2;
    
    while (!s1.empty())
    {
        int x = s1.top();           //pop first element form s1
        s1.pop();
        
        while (!s2.empty() && s2.top() < x)     //shift all ele form s2 to s1
        {
            s1.push(s2.top());
            s2.pop();
        }
        
        s2.push(x);             //push the wanted ele to s2
    }
    return s2;
}

int main()
{
    stack<int> s1;
    
    s1.push(12);
    s1.push(56);
    s1.push(68);
    s1.push(22);
    s1.push(86);
    s1.push(67);
    
    stack<int> temp  = sortstack(s1);
    cout << "Sorted numbers are: " << endl;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    

    return 0;
}
