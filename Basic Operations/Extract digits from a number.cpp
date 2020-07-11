#include <iostream>

using namespace std;

void extractnumbers(int nums[], int num)
{
    int i=2;
    do 
    {
        nums[i] = num%10;
        num = num/10;
        i--;
    }while(num>0);
}

int main()
{
    int num = 987;
    int nums[] = {-1,-8,-9};
    int n = 3;
    extractnumbers(nums, 987);
    for (int i=0;i<n;i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
