#include<iostream>
using namespace std;

class Friend
{
private:
    string name = "Abhishek Paltel";
protected:
    int age = 18;
    friend void showDeatails(Friend f); //declaration of frien dfunction
public:
    string city = "Rewa";
};

void showDeatails(Friend f){
    cout<< "My name is :"<<f.name<<endl;
    cout<< "My city is :"<<f.city<<endl;
    cout<< "My age is :"<<f.age<<endl;
}

int main(){
    Friend f;
    showDeatails(f);
    return 0;
}