
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  //Method 1
  char a[] = "Python";
  char b[8];
  int i;int j;
  for (i=0;a[i]!='\0';i++)
  {}
  i = i-1;
  for (j=0;i>=0;i--,j++)
  {
      b[j] = a[i];
  }
  b[j] = '\0';
  cout << b << endl;
    
    
  //Method 2
  string s = "how are you?";
  
  int x;

  for (x = s.size()-1;x>=0;x--)
  {
      cout << s[x];
  }
  cout << endl;
  
  //Method 3
    string m = "Abhiram dapke";
    reverse(m.begin(),m.end());
    cout << m << endl;
    
  //Method 4
  string y = "abcdefghijk";
  int z = y.size();
  for (int u=0;u<z/2;u++)
  {
      swap(y[u],y[z-1-u]);
  }
  cout << y <<endl;
  
  return 0;
}
