#include <iostream>

using namespace std;

// Hierarchical Inheritance
class Animal
{
public:
    void eat() {cout << "Eating" << endl;}
    void walk() {cout << "Walking" << endl;}
};

class Dog : public Animal
{
public:
    void talk() {cout << "Baooo" << endl;}
};

class Cat : public Animal
{
public:
    void talk() {cout << "Miaooo" << endl;}
};

class Dinosaur : public Animal
{
public:
    void talk() {cout << "Haooo" << endl;}
};

int main()
{
    Dog d;
    Cat c;
    Dinosaur d1;
    
    d.talk();
    c.talk();
    d1.talk();

    return 0;
}
