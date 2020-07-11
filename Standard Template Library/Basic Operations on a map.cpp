#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
   map<int,int> m;                          //type 1  int to int
   m[0] = 1;
   m[1] = 5;
   m[100] = 56;
   m.insert(pair<int,int>(4,5));
   m.insert(pair<int,int>(2,9));
   
   cout << m[100] << endl;
   
   for (auto it = m.begin();it!= m.end();it++)
        cout << it->first << "->" << it->second << " ";
   
   cout << endl;
   
   cout << "Map empty " << m.empty() << endl;       //check if map is empty or not,return true or false
   
   auto search = m.find(1);                     //find the value using a key and find fn
   cout << "Key found ->" << search->second << endl;
   
   
   
   
   
   
   
   map<int,string> name;                    //type 2 int to string
   name[1] = "abhi";
   name[2] = "ram";
   
   cout << name.size() << endl;
   
   cout << name[2] << endl;
   for (auto it = name.begin();it!= name.end();it++)
        cout << it->first << "->" << it->second << " ";
   
   cout << endl;
   
   
   
   
   
   
   
   
   map<char,int> s;                         //type 3 char to int
   string x = "Abhiram Dapke";
   
   for (char c: x)
        s[c]++;
        
   cout << s['a'] << " " << s['b'];                 //find the freq of occurance of a and b in the string

    return 0;
}
