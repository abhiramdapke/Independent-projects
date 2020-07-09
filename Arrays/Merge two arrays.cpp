
#include <iostream>

using namespace std;

//merging can be done only on sorted list.
//we need a third array
//TC - O(m+n)
void merge(int a[],int n, int b[], int m)
{
    int i,j,k;
    int c[n+m];
    i=0;j=0;k=0;
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            c[k++] = a[i++];
        }
        else 
            c[k++] = b[j++];
    }
    for (;i<n;i++)
    {
        c[k++] = a[i];
    }
    for (;j<m;j++)
    {
        c[k++] = b[j];
    }
    //display array
    for (int a=0;a<(sizeof(c)/sizeof(c[0]));a++)
    {
        cout << c[a] << " ";
    }
}
int main()
{
    int a[] = {1,12,23,44,55,66};
    int b[] = {6,17,18,29};
    merge(a,6,b,4);
    
    return 0;
}
