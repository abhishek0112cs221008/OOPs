#include<iostream>
using namespace std;

class Engine
{
public:
    void startEngine(){
        cout<<"Engine Started !!"<<endl;
    }

    void stopEngine(){
        cout<<"Engine Stopped !!"<<endl;
    }
};

class Car
{
public:
    Engine e;
    void startCar(){
        e.startEngine();
        cout<<"Car Started !!"<<endl;
    }

    void stopCar(){
        e.stopEngine();
        cout<<"Car Stopped !!"<<endl;
    }
};


int main()
{
    Car c;
    c.startCar();
    c.stopCar();

    return 0;
}