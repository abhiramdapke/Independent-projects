#include <iostream>
#include <string>
using namespace std;

struct array
{
    int a[10];
    int size;
    int length;
};

int max(struct array arr)
{
    int max = arr.a[0];
    int i;
    for (i=1;i<=arr.length;i++)
    {
        if (arr.a[i] > max)
            max = arr.a[i];
    }
    return max;
}

int min(struct array arr)
{
    int min = arr.a[0];
    int k;
    for (k=1;k<=arr.length;k++)
    {
        if (arr.a[k] < min)
            min = arr.a[k];
    }
    return min;
}

int sum(struct array arr)
{
    int s = 0;
    int j;
    for (j=0;j<=arr.length;j++)
    {
       s += arr.a[j];
    }
    return s;
}

int main()
{
    struct array arr1 = {{2,5,6,8,9,11,56,89,95,12},10,9};
    cout << "Max element is " << max(arr1) << endl;
    cout << "Min element is " << min(arr1) << endl;
    cout << "Sum of elements is " << sum(arr1) << endl;
    return 0;
}
