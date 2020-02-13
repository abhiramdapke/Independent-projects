#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubblesort(int a[], int n)
{
    int i,j,flag = 0;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            flag = 0;
            if (a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

void display(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {11,13,7,12,16,9,123,45,6,3};
    int n = 10;
    bubblesort(a,n);
    display(a, n);
    return 0;
}
