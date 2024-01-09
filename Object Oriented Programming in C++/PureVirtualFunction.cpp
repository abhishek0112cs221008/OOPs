#include<iostream>
using namespace std;

//C++ program for pure virtual function

class Base
{
private:
    int x;
public:
    virtual void show() = 0;
};

class Derrived : public Base
{
public:
    void show(){
        cout<<"In derrived Class !!"<<endl;
    }
};

int main()
{
    Base *bp = new Derrived();
    bp->show();
    return 0;
}