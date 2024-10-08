#include <iostream>
using namespace std;

class Student {
private:
    string name;   // Private member variable
    int age;       // Private member variable

public:
    // Public method to set the values of private members
    void setDetails(string studentName, int studentAge) {
        if (studentAge > 0) {  // Simple validation
            name = studentName;
            age = studentAge;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Public method to get the details of the student
    void getDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;  // Create an object of the Student class

    // Set student details using public method
    s1.setDetails("John", 20);

    // Get and display student details using public method
    s1.getDetails();

    return 0;
}
