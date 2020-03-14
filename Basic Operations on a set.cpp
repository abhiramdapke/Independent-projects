#include <iostream>
#include <set>

using namespace std;
/*
1. Set is always sorted.
2. Set ele are always unique
3. Set is an associative container
4. Values of the ele cannot be modified.*/


int main()
{
    set <int> s;
    
    s.insert(10);                                           //insert in a set
    s.insert(10);
    s.insert(20);
    s.insert(90);
    s.insert(60);
    s.insert(40);
    s.insert(10);
    s.insert(80);

    
    set <int, greater<int>> se;                             //store values in a set in reverse order
    
    se.insert(10);                                           //insert in a set
    se.insert(10);
    se.insert(20);
    se.insert(90);
    se.insert(60);
    se.insert(40);
    se.insert(10);
    se.insert(80);
    
    set<int>::iterator i;
    for (i=s.begin();i!=s.end();i++)                   //print the elements in a set
        cout << *i << " ";
    
    cout << endl;
        
    for (i=se.begin();i!=se.end();i++)                   //print the elements in a set in reverse order
        cout << *i << " ";
        
    cout <<  endl;
        
    cout << s.size() << endl;                               // size and max_size
    cout << s.max_size() << endl;
    
    if (s.empty())                                          //checking if the set is empty
        cout << "Set is empty" <<  endl;
    else
        cout << "Set is not empty" << endl;
        
        
    s.erase(80);                                            //Erase ele in a set method 1
    
    s.erase(s.begin(),s.find(60));                          //Erase ele in a set method 2, erase ele less than 60
    for (i=s.begin();i!=s.end();i++)                         //print the elements in a set
        cout << *i << " ";
        
    s.clear();                                              //clear the entire set

    return 0;
}
