#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    //Program 1
    
    struct Employee
    {
        int nr;
        char name[20];
        double salary;
    }e1 = {1,"Abhi",1300.50},e2;
    
    e2.nr = 2;
    strncpy(e2.name,"Max",20);
    e2.salary = 4000.26;
    
    struct Employee e3 = {3,"Tommy",500};
    
    cout << "Employee 1 data is " << e1.name << " " << e1.salary << endl;
    cout << "Employee 2 data is " << e2.name << " " << e2.salary << endl;
    cout << "Employee 3 data is " << e3.name << " " << e3.salary << endl;
    
    
    /* typedef int integer          Rename a data type
        integer a = 2;
        cout << a << endl;
    */
    
    
    //Program 2
    
    typedef struct Employee
    {
        int nr;
        char name[20];
        double salary;
    }Employee;
    
    //Or typedef struct Employee Employee can also work with a normal structure
    
    Employee e1 = {1,"Abhi",1300.50},e2;
    
    e2.nr = 2;
    strcpy(e2.name,"Max");
    e2.salary = 4000.26;
    
    Employee e3 = {3,"Tommy",500};
    
    cout << "Employee 1 data is " << e1.name << " " << e1.salary << endl;
    cout << "Employee 2 data is " << e2.name << " " << e2.salary << endl;
    cout << "Employee 3 data is " << e3.name << " " << e3.salary << endl;
    return 0;
}
