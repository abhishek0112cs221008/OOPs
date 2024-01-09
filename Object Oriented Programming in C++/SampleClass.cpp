#include<iostream>
using namespace std;

class Sample
{
    //private access specifire or Modifire
private:  
    //Data members ----------------
    int length=2;
    int height=3;
    int breadth=4;

//public access specifire or Modifire
public:
    //----Member functions-------(Declaration)
    double calculateArea(){  
        return length*breadth;
    }

    double calculateVolume();
};


//------member function definition using scope resolution operator---
double Sample :: calculateVolume(){
    return length*breadth*height;
}


//-----------main function-----------
int main(){
    Sample obj; //create object of class Sample
    
    //-----member function called using dot(.) operator with class object
    cout<<"Area of Rectangle is : "<<obj.calculateArea()<<endl;
    cout<<"Volume of Rectangle is : "<<obj.calculateVolume()<<endl;
    
    return 0;
}