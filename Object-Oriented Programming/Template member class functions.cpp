
#include <iostream>

using namespace std;

//program 1

template<class t>
class test
{
    t a,b;
public:
    void get()
    {
        cin>>a>>b;
    }
    t sum();
};

template<class t>
t test<t>::sum()
{
    return a+b;
}


int main()
{
    test<int> t1;
    test<float> t2;
    
    cout << "Enter two integers" << endl;
    t1.get();
    cout << "Enter two floats" << endl;
    t2.get();
    
    cout << "Int sum is " << t1.sum() << endl;
    cout << "Float sum is " << t2.sum() <<  endl;

    return 0;
}
