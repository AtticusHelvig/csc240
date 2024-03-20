#include "student.h"

long Student::nextID = 1;

void Student::addClass(int c, int grade) {
    totalCredits += c;
    totalPoints += grade * c;
}

float Student::calcGPA() { return (float)totalPoints / (float)totalCredits; }
