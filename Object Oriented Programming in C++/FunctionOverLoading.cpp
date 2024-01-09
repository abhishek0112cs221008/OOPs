#include<iostream>
using namespace std;

// Polymorphism -- Compile time Polymorphism
//C++ program for Function Over Loading
/*Same name function within the class but different parameters */

class A
{
public:
    void add(int x,int y){
        cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    }
    void add(int x,int y,int z){
        cout<<x<<" + "<<y<<" + "<<z<<" = "<<x+y+z<<endl;
    }
    void add(float x,float y){
        cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    }
    void add(double x,int y){
        cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    }
};


int main(){
    A a;
    a.add(2,3);
    a.add(2,3,4);
    a.add(2.2,3.0);
    a.add(2.88,3);
    return 0;
}