#include<iostream>
using namespace std;

class Operation
{
private:
    int a,b,add,sub;
public:
    void Get(); 
    void Sum();
    void Diff();
};

inline void Operation ::Get(){
    cout<< "Enter the first value :";
    cin>>a;
    cout<< "Enter the second value :";
    cin>>b;
}
inline void Operation ::Sum(){
    cout<< "Addition of two numbers :"<<a+b<<endl;
}
inline void Operation ::Diff(){
    cout<< "Difference of two numbers :"<<a-b<<endl;
}

int main(){
    cout<< "------------Program using Inline Function-------------"<<endl;
    Operation obj;
    obj.Get();
    obj.Sum();
    obj.Diff();

    return 0;
}


