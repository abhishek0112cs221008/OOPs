#include<iostream>
using namespace std;
// C++ program for Data Abstraction 
//Concept of Hiding Data
/*means hide the unnecessary data and only show the necessary data*/

class D
{
private:
    int a,b,c;
public:
    void add(){
        cout<<"Enter the value of a & b : ";
        cin>>a>>b;
        c = a + b;
        cout<<"Sum of a and b is : "<<c<<endl;
    }
};

int main(){
    D d;
    d.add();
    return 0;
}