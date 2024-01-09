#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Aniaml is eating !!" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is Barking !!" << endl;
    }
};

int main()
{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}