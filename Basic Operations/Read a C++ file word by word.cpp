#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    
    fstream file; 
    string word, t, q, filename; 
  
    // filename of the file 
    filename = "file.txt"; 
  
    // opening file 
    file.open(filename.c_str()); 
  
    // extracting words from the file 
    while (file >> word) 
    { 
        // displaying content 
        cout << word << endl; 
    } 
  
    return 0; 
} 
