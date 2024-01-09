#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int year;
    int rno;

public:
    // Default constructor declaration
    Student();

    // Parameterize constructor
    Student(string n, int y, int r)
    {
        name = n;
        year = y;
        rno = r;
    }

    // copy constructor
    Student(Student &s)
    {
        name = s.name;
        year = s.year;
        rno = s.rno;
    }

    // Show member function
    void Show()
    {
        cout << "Name is : " << name<<endl;
        cout << "Year is : " << year<<endl;
        cout << "Roll number is : " << rno<<endl;
    }

    //Destructor 
    ~Student(){
        cout<< "Thanks!!"<<endl;
    }
};

// Default constructor defination
Student ::Student()
{
    name = " ";
    year = 0;
    rno = 0;
}

//---------main function----------------------

int main()
{
    Student s1;
    cout<<"--------------------------Default contructor |->"<<endl;
    s1.Show();
    cout<<"--------------------------Parameterize contructor |->"<<endl;
    Student s2("Abhishek", 2024, 2004);
    s2.Show();
    cout<<"--------------------------Copy contructor |->"<<endl;
    Student s3(s2);
    s3.Show();
    cout<<"--------------------------Destructor Called!! |->"<<endl;
    return 0;
}