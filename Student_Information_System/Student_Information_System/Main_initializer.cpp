#include <iostream>
#include "Main_initializer.h"

using namespace std;

void Main_initializer::addStudent(list<Student>* lst) {
	int _id, _examGrade;
	string _name, n, surname;

	cout << "Please enter the student id: ";
	cin >> _id;
	cout << "\nPlease enter the name and surname: ";
	cin >> n >> surname;
	cout << "\nPlease enter the exam grade: ";
	cin >> _examGrade;
	_name = n + " " + surname;

	Student std(_id, _name, _examGrade);
	lst->push_back(std);

	cout << "\n* A student named " << _name << " was added to the list. *\n\n";
}

void Main_initializer::showList(list<Student>* lst) {
	list<Student>::iterator studentItr;
	cout << "------ Student List ------" << endl;
	for (studentItr = lst->begin(); studentItr != lst->end(); studentItr++) {
		cout << endl;
		studentItr->showInformations();
	}

	cout << "\n* End of list. *" << endl;
}

void Main_initializer::deleteStudent(list<Student>* lst) {
	list<Student>::iterator studentItr;
	int _id;
	cout << "Please enter the student id for delete: ";
	cin >> _id;

	for (studentItr = lst->begin(); studentItr != lst->end(); studentItr++) {
		if (studentItr->getId() == _id) { 
			break; 
		}
	}

	if (studentItr == lst->end()) {
		cout << "There is no one associated with the id you entered." << endl;
	}
	else {
		cout << "\n* * Student delete process completed * *\n";
		lst->erase(studentItr); 
	}

}

void Main_initializer::searchStudent(list<Student>* lst) {
	cout << "Please enter the student id for search: ";
	int _id;
	cin >> _id;

	list<Student>::iterator studentItr;
	for (studentItr = lst->begin(); studentItr != lst->end(); studentItr++) {
		if (studentItr->getId() == _id) {
			break;
		}
	}

	if (studentItr == lst->end()) {
		cout << "There is no one associated with the id you entered." << endl;
	}
	else {
		cout << "\nInformation about the student you are looking for: \n";
		studentItr->showInformations();
		cout << endl;
	}
}