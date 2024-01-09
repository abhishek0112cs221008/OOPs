#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is Vehicle !!" << endl;
    }
};

class Car : public Vehicle  //single level
{
public:
    Car()
    {
        cout << "This is Car !!" << endl;
    }
};

class Racing
{
public:
    Racing()
    {
        cout << "This is for Racing !!" << endl;
    }
};

class Farrari : public Racing, public Car //multiple
{
public:
    Farrari()
    {
        cout << "Farrari is Racing Car!!" << endl;
    }
};

int main()
{
    Farrari f;
    return 0;
}

/*
    Vehicle
    |-> Car                Racing
    |->Farrari            <-|
*/