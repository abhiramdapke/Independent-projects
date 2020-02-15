#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionsort(int a[], int n)
{
    int i,j,k;
    for (i = 0; i<n-1; i++)
    {
        for (j = k = i; j<n ; j++)
        {
            if (a[j] < a[k])
                k = j;
        }
        swap (&a[i],&a[k]);
    }
}
int main()
{
 int a[] = {124,15,89,45,78,89,56,235,6};
 int n = 9;
 int i;
 selectionsort(a,n);
 for (i =  0; i<n; i++)
    cout << a[i] << " ";
cout << endl;
return 0;
}
