#include <iostream>

using namespace std;

class Twostacks
{
    int *arr;
    int size;
    int top1,top2;
public:
    Twostacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }
    
    void push1(int x)
    {
        if (top1 < top2-1)
        {
            top1++;
            arr[top1] = x;
        }
        else 
        {
            cout << "Stack 1 is Full" << endl;
            return;
        }
    }
    
    void push2(int x)
    {
        if (top1 < top2-1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack 2 is full" << endl;
            return;
        }
    }
    
    int pop1()
    {
        int x;
        if (top1>=0)
        {
            x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack 1 is empty" << endl;
            exit(1);
        }
    }
    
    int pop2()
    {
        int x;
        if (top2 < size)
        {
            x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "Stack 2 is empty" << endl;
            exit(1);
        }
    }
    
};

int main()
{
    Twostacks s(6);
    
    s.push1(10);
    s.push1(11);
    s.push1(13);
    s.push2(56);
    s.push2(98);
    s.push2(56);
    s.push2(98);
    
    cout << "Popped element from stack1 is " << s.pop1() << endl; 
    
    s.push2(74); 
    
    cout << "Popped element from stack2 is " << s.pop2();
    
    return 0;
}
