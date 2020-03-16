#include <iostream>
#include <utility>

//store two heterogeneous objects in one unit
using namespace std;

int main()
{
    //method 1
    pair <int,int> p;
    p.first = 3;
    p.second = 4;
    cout << p.first << " " << p.second << endl;
    
    //method 2
    pair <string,int> pairs("hello",2);
    cout << pairs.first << " " << pairs.second << endl;
    
    //method 3
    pair <string,int> pai;
    pai = make_pair("hi",6);
    cout << pai.first << " " << pai.second << endl;
 
    
    //swap - pairs should have the same type
    cout << "before swapping" << endl;
    cout << pai.first << " " << pai.second << endl;
    cout << pairs.first << " " << pairs.second << endl;
    swap(pai,pairs);
    cout << "after swapping" << endl;
    cout << pai.first << " " << pai.second << endl;
    cout << pairs.first << " " << pairs.second << endl;

    return 0;
}
