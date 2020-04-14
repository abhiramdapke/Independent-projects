#include <iostream>
#include <stack>
using namespace std;

class Stack
{
   stack<int> s1;
   stack<int> s2;
   int min;

public:
    
    void push(int x)
    {
        if (s1.empty())
        {
            min = x;
            s1.push(x);
            cout <<"Inserted: " << x << endl;
            return;
        }
        
        if (x<min)
        {
            s1.push(2*x-min);
            min = x;
        }
        else
            s1.push(x);
        cout << "Inserted: " << x << endl;
    }
    
    void pop()
    {
        int x;
        if (s1.empty())
        {
            cout << "Empty";
            exit(1);
        }
        
        cout << "Top element removed: ";
        x = s1.top();
        s1.pop();
        
        if (x<min)
        {
            cout << min << endl;
            min = 2*min - x;
        }
        else
            cout << x << endl;
    }
    
    void getmin()
    {
        if (s1.empty())
            cout << "Empty" << endl;
        else
            cout << "Min ele is: " << min << endl;
    }
};

int main()
{
    Stack s;
    s.push(29);
    s.push(23);
    s.getmin();
    // cout << endl;
    s.push(32);
    s.push(6);
    
    s.getmin();
    // cout << endl;
    s.pop();
    s.pop();
    
    s.getmin();

    return 0;
}
