#include <iostream>
#include <vector>
using namespace std;

vector<int>* addone(vector<int> v)
{
    int carry = 1;
    int sum;
    vector<int> *result = new vector<int>(v.size());
    for (int i=v.size()-1;i>=0;i--)
    {
        sum = v[i] + carry;
        if (sum == 10) carry = 1;
        else carry = 0;
        (*result)[i] = sum % 10;
    }
    if (carry == 1)
    {
        result = new vector<int>(v.size()+1);
        (*result)[0] = 1;
    }
    return result;
}

int main()
{
    vector<int> v = {9,9,9,9};
    vector<int>* vec = addone(v);
    for (int i=0;i<v.size();i++)
        cout << v[i] << " ";
    
    cout << endl;
    
    for (int i=0;i<vec->size();i++)
        cout << (*vec)[i] << " ";
    
    return 0;
}
