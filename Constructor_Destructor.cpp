#include<iostream>
using namespace std;


//---Create a class named Student-----
class Student
{
private:
//----------Data Members----------(private)
    long int rno;
    string name;
    int year;
public:
//--------Default Constructor------------
    Student(){
        rno = 0;
        name = "";
        year = 0;
    }

//--------Paremeterized Constructor-------(declaration)
    Student(long int r,string n,int y);

//--------Copy constructor----------------(with definition)
    Student(Student &s){
        rno = s.rno;
        name = s.name;
        year = s.year;
    }

//--------member function-------------------(declaration)
    void Display();

//-----------Destructor-----------------
    ~Student(){
        cout<< "THANKS !!"<<endl;
    }
};

//--------Paremeterized Constructor-------(definition)
Student::Student(long int r,string n,int y){
    rno = r;
    name = n;
    year = y;
}

//--------member function-------------------(definition)
void Student::Display(){
    cout<< "RollNumber of Student is :"<<rno<<endl;
    cout<< "Name of Student is :"<<name<<endl;
    cout<< "Year of Student is :"<<year<<endl;
}

//----------Main function---------------
int main()
{
    cout<< "--------------------------Default constructor--------------------------"<<endl;
    Student s1; //create an object of class //  constructor is automatically called 
    s1.Display();//called Display function
    cout<< "--------------------------Parameterized constructor-------------------"<<endl;
    Student s2(8,"Abhishek",2024);
    s2.Display();
    cout<< "-------------------------copy constructor-----------------------------"<<endl;
    Student s3(s2);
    s3.Display();
    cout<< "-------------------------Destructor-----------------------------------"<<endl;
    return 0;
}