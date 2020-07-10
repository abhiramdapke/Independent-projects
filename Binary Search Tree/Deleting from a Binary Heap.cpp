#include <iostream>
#include <stack>
using namespace std;

void insert(int arr[], int n)
{
    int i = n;
    int temp = arr[i];
    
    while (i>1 && temp > arr[i/2])
    {
        arr[i] = arr[i/2];
        i = i/2;
    }
    arr[i] = temp;
}

void rootdelete(int arr[],int n)
{
    //only root element can be deleted
    int x,i,j;
    x = arr[n];         //take last ele in x
    arr[1] = arr[n];    //make last ele as first to preserve a complete binary tree
    i = 1; j = 2*i;     //place i on 1st ele and j on its left child
    
    while (j < n-1)
    {
        if (arr[j+1] > arr[j])      //compare children
            j = j+1;    
        if (arr[i] < arr[j])        //compare parent and child
        {
            swap(arr[i],arr[j]);
            i = j;
            j = 2*j;
        }
        else
            break;
    }
    arr[n] = x;
}

int main()
{
    int a[] = {0,2,6,4,8,9,45,12,36};
    
    for (int i=2;i<=8;i++)
    {
        insert(a,i);
    }
    
    rootdelete(a,8);
    
    for (int j=1;j<=8;j++)
    {
        cout << a[j] << " ";
    }
    
    

    return 0;
}
