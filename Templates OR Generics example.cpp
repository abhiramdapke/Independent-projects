
#include <iostream>

using namespace std;

//program 1

template<class t>
t sum(t a, t b)
{
    return a+b;
}

int main()
{
    cout << "Integer sum is: " << sum(4,5) << endl;
    cout << "Float sum is: " << sum(4.2,8.6) << endl;
    cout << "Double sum is: " << sum(5.123894,8.12456) << endl;

    return 0;
}

//program 2

template<class t1,class t2>
float sum(t1 x, t2 y)
{
    return x+y;
}

int main()
{
    cout << "Integer sum is: " << sum(14,35) << endl;
    cout << "Float sum is: " << sum(4.2,8.6) << endl;
    cout << "Float sum is: " << sum(4,8.6) << endl;
    cout << "Float sum is: " << sum(4.59,8) << endl;
    
    return 0;
}

//program 3

template<class t>
t sum(t a[], int size)
{
    t s=0;
    for (int i=0;i<size;i++)
    {
        s = s + a[i];
    }
    return s;
}

int main()
{
    int x[5] = {10,20,30,40,50};
    float y[3] = {1.1,2.2,3.33};
    
    cout << "Int Array elements sum " << sum(x,5) << endl;
    cout << "Int Array elements sum " << sum(y,3);
    
    return 0;
}
