#include<iostream>
using namespace std;

class Get
{
private:
    string name = "Abhishek Patel";
    string city = "Rewa";
    int age = 18;
    friend class show;
};

class show
{
public:
    void showDeatails(Get g){
    cout<< "My name is :"<<g.name<<endl;
    cout<< "My city is :"<<g.city<<endl;
    cout<< "My age is :"<<g.age<<endl;
    }
};

int main(){
    Get g;
    show s;
    s.showDeatails(g);
    
    return 0;
}