#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void create (struct Stack *st)
{
    cout << "Enter size:";
    cin >> st->size;
    st->top = -1;
    st->s = new int[st->size];
}

void display(struct Stack st)
{
    int i;
    for (i = st.top; i>=0; i--)
    {
        cout << st.s[i] << " ";
    }
    cout << endl;
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
    st->top++;
    st->s[st->top] = x;   
    }
}

void pop(struct Stack *st)
{ 
    if (st->top == -1)
    {
        cout << "Stack is empty" <<  endl;
    }
    else
    {
        st->s[st->top--];
    }
}

int isempty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

int isfull(struct Stack st)
{
    if (st.size - 1 == st.top)
        return 1;
    return 0;
}

int stacktop(struct Stack st)
{
    if (!isempty(st))
        return st.s[st.top];
    return -1;
}

int main()
{
    struct Stack st;
    create(&st);
    
    push(&st,10); 
    push(&st,20); 
    push(&st,30); 
    push(&st,40); 
    push(&st,50); 
    
    pop(&st);
    pop(&st);
    
    display(st);
    
    return 0;
}
