#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j=low;j<=high-1;j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr,low,high);
        
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

void printarray(int arr[], int size)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  


int main()
{
   int arr[] = {2,6,5,8,9,4,7,4};
   quicksort(arr,0,7);
   printarray(arr,8);
    return 0;
}
