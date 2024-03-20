#include <iostream>

#include "student.h"

using namespace std;

void printStudent(Student *student);

int main() {
    Student snoopy("Joe Cool");

    snoopy.addClass(3, 4);
    snoopy.addClass(4, 3);
    snoopy.addClass(3, 2);
    snoopy.addClass(5, 4);

    cout << "Name: " << snoopy.getName() << endl;
    cout << "ID: " << snoopy.getID() << endl;
    printf("GPA: %4.2f\n", snoopy.calcGPA());

    cout << endl;

    // Add Nikola Tesla Here
    Student tesla("Nikola Tesla");

    tesla.addClass(3, 4);
    tesla.addClass(4, 4);
    tesla.addClass(3, 4);
    tesla.addClass(5, 4);
    tesla.addClass(4, 4);
    tesla.addClass(3, 4);
    printStudent(&tesla);

    // Add yourself as a pointer to s Student with the new operator.

    return 0;
}

void printStudent(Student *student) {
    cout << "Name: " << student->getName() << endl;
    cout << "ID: " << student->getID() << endl;
    printf("GPA: %4.2f\n", student->calcGPA());
    cout << endl;
}
