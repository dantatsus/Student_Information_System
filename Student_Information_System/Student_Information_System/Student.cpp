#include <iostream>
#include "Student.h"

using namespace std;

// Constructor method
Student::Student(int _id, string _name, int _examGrade) {
	id = _id;
	name = _name;
	examGrade = _examGrade;
}

// Setters

void Student::setId(int _id) {
	id = _id;
}

void Student::setName(string _name) {
	name = _name;
}

void Student::setExamGrade(int _examGrade) {
	examGrade = _examGrade;
}

// Getters

int Student::getId() { return id; }
string Student::getName() { return name; }
int Student::getExamGrade() { return examGrade; }

// Information method

void Student::showInformations() {
	cout << "id: " << id << endl << "name: " << name << endl << "exam grade: " << examGrade << endl;
}