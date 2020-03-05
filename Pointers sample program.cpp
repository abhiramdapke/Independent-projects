#include <iostream>

using namespace std;


int main()
{
  int i = 100;
  int *ptr;
  ptr = &i;
  
  cout << i << endl;
  cout << ptr << endl;
  cout << &ptr << endl;
  cout << *ptr << endl;
  cout << *(&i) << endl;
  cout << &ptr << endl;
  cout << &i << endl;
  
    
    return 0;
}
