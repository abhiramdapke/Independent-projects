#include <iostream>
#include <string>
using namespace std;

struct array
{
    int a[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    for (i=0;i<arr.length;i++)
    {
        cout << arr.a[i] << endl;
    }
}

int binarysearch(struct array arr, int key)     // only works on a sorted array
{
   int l,mid,h;
   l = 0;
   h = arr.length-1;
   while (l<=h)
   {
        mid = (l+h)/2;
        if (key == arr.a[mid])
            return mid;
        else if (key < arr.a[mid])
            h = mid - 1;
        else
            l = mid + 1;
            
   }
return -1;
}

int main()
{
    struct array arr1 = {{2,5,6,8,9,11,56,89,95},10,9};
    cout << binarysearch(arr1,5) << endl;
    display(arr1);
    return 0;
}
