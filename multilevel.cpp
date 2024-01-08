#include<iostream>
using namespace std;

class veichal
{
    public:
    veichal(){
    cout<<"I am veichal\n";
    }
};
/////////////////////////////////
class twowheeler :public veichal
{

    public:
    twowheeler()
    {
        cout<<"this is two wheeler"<<endl;
    }
};
//////////////////////////////
class car :public twowheeler
{
    public:
    car()
    {
        cout<<"hello I am a car\n";
    }
};
////////////////////////////
// class bike:public twowheeler,public car
// {
//     public:
//     bike()
//     {
//         cout<<" This is Bike"<<endl;
//     }
// };

int main()
{
    cout<<"multilevel is called\n";
    car c;
    // cout<<"\n\nmultiple is called\n";
    // bike b;
    return 0;
}