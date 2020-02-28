#include <iostream>
#include <conio.h>
using namespace std;

//We use static int variable when we work with multiple objects of a class.
class Sample
{
    static int count;
public:
    Sample() //constructor
    {
        count++;
        cout << count << " obj created" << endl;
    }
    ~Sample() //destructor
    {
        count--;
        cout << count << " obj deleted" << endl; 
    }
};
int Sample::count;

int main()
{
   Sample s1,s2,s3;

    return 0;
}
