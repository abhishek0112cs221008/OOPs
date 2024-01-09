#include <iostream>
using namespace std;

class A
{
public:
    A(){
        cout<<"A's constructor called !(Parent class)!"<<endl;
    }
};

class B
{
public:
    B(){
        cout<<"B's constructor called !(Parent class)!"<<endl;
    }
};

class M : public B , public A
{
public:
    M(){
        cout<<"M's constructor called !(Child Calsss)!"<<endl;
    }
};

int main(){
    M m;

    return 0;
}