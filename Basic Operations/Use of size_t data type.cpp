#include <iostream>

using namespace std;
/* 1.size_t is used to represent objects/variables in bytes.
   2.It guarantees to be big enough to contain the size of the biggest obj that system can handle
   3. i) In 32 bit compiler, it is typedef of unsigned int.
      ii)In 64 bit compiler, it is typedef of unsigned long long
   4.It is never negative
*/
  
//use size_t when you need a positive value like length of a string
void print(size_t count)
{
    while (count--)
    {
        cout << "Hello" << endl;
    }
}

int main()
{
    print(10);

    return 0;
}
