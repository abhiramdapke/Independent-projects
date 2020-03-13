#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "Abhiram ";
    int size = name.size();                    //get the size of stl string
    
    name.resize(size+2,'+');                    
    name.resize(14);                            //resize a string
    cout << name << endl;   
    
                         
    int contains = name.find("am");              //To find the position of a text
    cout << contains << endl;
    
    name+= " how are you?";                     //overload operator += , addition of a string
    cout << name << endl;
    
    
    name.pop_back();                                //push pop chars in a string
    name.push_back('s');
    cout << name << endl;
    
    
    char name2[] = {'A','b','h','i','r','a','m'};
    const char name3[] = "dapke";
    
    
    //int size = strlen(nam);                     //get the size of std::string
    name[2] = 'a';                                  //change a char in a string
    cout << name2 << endl;
    
    
    string ns;
    for (int i=0;i<name.size();i++)                 //remove all a's from the string i.e remove a char from a string
    {
        if (name.at(i)!= 'a')
            ns += name.at(i);
    }
    cout << ns << endl;

    return 0;
}
