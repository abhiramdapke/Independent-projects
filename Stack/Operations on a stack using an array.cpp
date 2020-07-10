//Stack operations using an array
#include <iostream>
#define CAPACITY 5

using namespace std;

int top = -1;
int stack[CAPACITY];


int isempty()
{
    if (top == -1)
        return 1;
    return 0;
}

int isfull()
{
    if (top == CAPACITY-1)
        return 1;
    return 0;
}

void push(int x)
{
    if (isfull())
        cout << "Stack is full";
    else
    {
        top++;
        stack[top] = x;
    }
}
   
void pop()
{
    if (isempty())
        cout <<  "Stack is empty";
    else
        top--;
}

void print()
{
    for (int i=0;i<=top;i++)
        cout << stack[i] << endl;
}

int main()
{
    int n = sizeof(stack)/sizeof(stack[0]);
    push(2);
    push(3);
    push(6);
    pop();
    print();
    return 0;
}
