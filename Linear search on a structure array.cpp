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

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int linearsearch(struct array *arr, int key)
{
    for (int i=0;i<arr->length;i++)
    {
        if (key == arr->a[i])
        {
            swap(&arr->a[i],&arr->a[0]);
            return i;
        }
    }
    return -1;
}

int main()
{
    struct array arr1 = {{1,45,78,89,23,45,15,46},10,8};
    cout << "Index at which element is" << linearsearch(&arr1,46) << endl;
    display(arr1);
    return 0;
}
