#include <iostream>

using namespace std;

struct Matrix
{
    int a[10];
    int n;
};

void set(struct Matrix *m,int i, int j, int x)
{
    if (i == j)
        m->a[i-1] = x;
}

int get(struct Matrix m,int i, int j)
{
    if (i == j)
        return m.a[i-1];
    else
        return 0;
}

void display(struct Matrix m)
{
    int i,j;
    for (i=0;i<m.n;i++)
    {
        for (j=0;j<m.n;j++)
        {
            if (i == j)
                cout << m.a[i] << " ";
            else
                cout << "0" << " ";
        }
        cout << endl;
    }
}

int main()
{
    struct Matrix m;
    m.n = 4;
    
    set(&m,1,1,5);
    set(&m,2,2,8);
    set(&m,3,3,6);
    set(&m,4,4,9);
    
    cout << get(m,2,2) << endl;
    
    display(m);
    
    return 0;
}
