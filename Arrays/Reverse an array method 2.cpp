#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int a[10];
    int size;
    int length;
};

void swap(int *, int *);
void reverse(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->a[i],&arr->a[j]);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void display(struct Array arr)
{
    for (int m=0; m<arr.length; m++)
    cout << arr.a[m] << " ";
}

int main()
{
    struct Array arr1 = {{2,3,4,5,6,7,8,9,10},10,9};
    reverse(&arr1);
    display(arr1);
    return 0;
}
