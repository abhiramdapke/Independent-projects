#include <iostream>
#include <stdlib.h>

using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};
struct Sparse
{
    int m;
    int n;
    int num;
    struct Element *ele;
};

void create(struct Sparse *s)
{
    int i;
    cout << "Enter Dimensions";
    cin >> s->m >> s->n;
    cout << "Number of non-zero elements";
    cin >> s->num;
    
    s->ele = new Element[s->num];
    cout << "Enter non-zero elements";
    for (i=0;i<s->num;i++)
    {
        cin>> s->ele[i].i >> s->ele[i].j >> s->ele[i].x;  
    }
}

void display(struct Sparse s)
{
    int i,j,k = 0;
    for (i=0;i<s.m;i++)
    {
        for (j=0;j<s.n;j++)
        {
            if (i == s.ele[k].i && j == s.ele[k].j)
                cout << s.ele[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}


int main()
{
    struct Sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    
    cout << "First Matrix\n";
    display(s1);
    
    cout << "Second Matrix\n";
    display(s2);

    
    return 0;
}
