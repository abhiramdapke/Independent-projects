#include <iostream>
#include <string>
#include <stack>
using namespace std;

template<class T>
class Stack
{
private:
    T *st;
    int size;
    int top;
public:
    Stack()
    {
        size = 10;
        top = -1;
        st = new T[size];
    }
    Stack(int size)
    {
        this->size = size;
        top = -1;
        st = new T[this->size];
    }
    void push(T x);
    void pop();
    T peek(int index);
    int stacktop();
    int isempty();
    int isfull();
    void display();
};

template<class T>
void Stack<T>::push(T x)
{
    if (isfull())
        cout << "Stack is full" << endl;
    else
    {
        top++;
        st[top] = x;
    }
}

template<class T>
void Stack<T>::pop()
{
    if (isempty())
        cout<< "Stack is empty" << endl;
    else
    {
        top--;
    }
}

template<class T>
T Stack<T>::peek(int index)
{
    T x=-1;
    if(top-index+1<0)
        cout<<"Invalid Index"<<endl;
    else
        x=st[top-index+1];
    return x;
}

template<class T>
int Stack<T>::stacktop()
{
    if (isempty())
        return -1;
    return st[top];
}

template<class T>
int Stack<T>::isfull()
{
    if (st[top] == size-1)
        return 1;
    return 0;
}

template<class T>
int Stack<T>::isempty()
{
    if (st[top] == -1)
        return 1;
    return 0;
}

template<class T>
void Stack<T>::display()
{
    for (int i=top;i>=0;i--)
    {
        cout << st[i] << " ";
        cout << endl; 
    }
}

int main()
{
    Stack<char> stk(5);
    stk.push('a');
    stk.push('b');
    stk.push('c');
    stk.push('d');
    stk.push('e');
    stk.push('f');
    
    stk.pop();
    stk.pop();
    
    stk.display();
    
    cout << stk.peek(1) << endl;
    return 0;
}
