#include <iostream>

using namespace std;

// Single Inheritance
class Vehicle
{
public:
    void drivevehicle() {cout << "Driving" << endl;}
};

class Car : public Vehicle
{
public:
    void gettires() {cout << "4 tires" << endl;}
};


//Multilevel Inheritance(Extemded from single level Inheritance)
class Bmw : public Car
{
public:
    void style() {cout << "Style" << endl;}
};

class Lamborghini : public Car
{
public:
    void cost() {cout << "cost" << endl;}
};

int main()
{
    Vehicle v;
    Car c;
    Bmw b;
    Lamborghini l;
    
    c.gettires();
    c.drivevehicle();
    
    b.style();
    l.cost();

    return 0;
}
