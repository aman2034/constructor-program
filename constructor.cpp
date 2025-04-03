/* (LAB:-5) Define a class student with data member as roll number and name.Generate an object and initialize its data member
            using Default constructor,Copy constructor,and parameterized constructor.Finally display all data member. */
#include <iostream>
using namespace std;
class Student
 {
private:
    int rollNumber;
    string  name;
public:
    Student()                                            // Default Constructor
     {
        rollNumber = 01;
        name = "Aman";
    }
 Student(int roll, string studentName)                   // Parameterized Constructor
 {
        rollNumber = roll;
        name = studentName;
    }
    Student(const Student &s)                             // Copy Constructor
    {
        rollNumber = s.rollNumber;
        name = s.name;
    }
    void display()                                        // Method to display student details
     {
        cout << "Roll Number is:-  " << rollNumber << ", Name is:- " << name << endl;
    }
};
int main() {
    Student student1;                                     // Default constructor
    student1.display();

    Student student2(02, "Amit");                    // Parameterized constructor
    student2.display();

    Student student3(student2);                           // Copy constructor
    student3.display();
    return 0;
}