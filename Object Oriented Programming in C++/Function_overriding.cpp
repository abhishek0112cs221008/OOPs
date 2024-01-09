#include <iostream>
using namespace std;

/*Type of Polymorphism -> Run Time Polymorphism -> Function Overiding */
// Virtual function program in C++

class A
{
public:
    virtual void add(int a, int b)
    {
        cout << "From Base class !!" << endl;
        cout << a << " + " << b << " = " << a + b << endl;
    }
};

class B : public A
{
public:
    void add(int a, int b)
    {
        cout << "From Derrived class !!" << endl;
        cout << a << " + " << b << " = " << a + b << endl;
    }
};

int main()
{
    B b;
    A *ptr;
    ptr = &b;
    ptr->add(2, 5);
    return 0;
}