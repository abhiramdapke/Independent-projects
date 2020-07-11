#include<iostream>
#include<stdlib.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionsort(int a[], int n)
{
    int i,j,x;
    for (i=0;i<n;i++)
    {
        j = i-1;
        x = a[i];
        while (j> -1 && a[j] > x)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
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
    insertionsort(a,n);
    display(a, n);
    return 0;
}
