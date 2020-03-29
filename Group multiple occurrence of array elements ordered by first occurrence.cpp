#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1,1,2,5,3,5,6,1,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    bool *visited = new bool[n];
    for (int i=0; i<n; i++) 
        visited[i] = false; 
        
        
    for (int i=0; i<n; i++) 
    { 
        
        if (!visited[i]) {
             
            cout << arr[i] << " "; 
            for (int j=i+1; j<n; j++) 
            { 
                if (arr[i] == arr[j]) 
                { 
                    cout << arr[i] << " "; 
                     visited[j] = true;
                } 
            } 
        }
    } 
    delete [] visited;
    return 0;
}
