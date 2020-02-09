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
    cout << "Elements are\n";
    for (i=0;i<arr.length;i++)
    {
        cout << arr.a[i];
    }
}
void append(struct array *arr,int x)
{
    if (arr->length < arr->size)
        arr->a[arr->length++] = x;
}
void insert(struct array *arr,int index, int x)
{
   int i;
   if (index >= 0 && index <= arr->length)
   {
       for (i=arr->length;i>index;i--)
            arr->a[i] = arr->a[i-1];
        arr->a[index] = x;
        arr->length++;
   }
}


int main()
{
  struct array arr1 = {{2,3,4,5,6},10,5};
  append(&arr1,15);
  insert(&arr1,0,12);
  display(arr1);
 return 0;
}
