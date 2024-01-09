#include<iostream>
using namespace std;
//----------C++ program for Encapsulation---------------------

//------  Create a class named 'E'  -------
class E
{
private:
    int x;  //Data member ------------
public:
    //------member functions ------
    void get(int a){
        x=a;
    }

    void show(){
        cout<< "Value is : "<<x<<endl;
    }
};

int main()
{
    E e;       //create an object of class E
    e.get(5); //get function called
    e.show();//show function called
    return 0;
}