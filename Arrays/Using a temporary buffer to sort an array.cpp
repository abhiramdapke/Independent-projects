#include <iostream>
#include <algorithm>
#include <memory>

using namespace std;

//Temporary buffer for extra memory
//Use of get_temporary buffer
void sorting(int b[], int n)
{
    int i,count = 0;
    for (i=0;i<n;i++)
    {
        if (b[i]%2 == 0)
            count++;
    }
    cout << "Total number of even elements are: " << count << endl;
    cout << "Original array is: ";
    for (i=0;i<n;i++)
    {
        cout << b[i] << " ";
    }
    cout<< endl;
    
    
    pair<int*, ptrdiff_t> p = get_temporary_buffer<int>(10);
    
    uninitialized_copy(b,b+p.second,p.first);
    
    sort(p.first,p.first + p.second);
    
    cout << "Sorted Array is: " << endl;
    for(i=0;i<n;i++)
    {
        cout << p.first[i] << " ";
    }
}

int main()
{
    int b[] = {8,9,2,3,4,5,6,10,23,45};
    int n = sizeof(b)/sizeof(b[0]);
    sorting(b,n);

    return 0;
}
