#include <iostream>
#include "Student.h"
#include "Main_initializer.h"
#include <list>

using namespace std;

void menu() {
	cout << "* * * * * * * * *" << endl;
	cout << "*               *" << endl;
	cout << "*      MENU     *" << endl;
	cout << "*               *" << endl;
	cout << "* * * * * * * * *" << endl;
	cout << "1 -> Add new record" << endl;
	cout << "2 -> Show list" << endl;
	cout << "3 -> Delete registeration by student id" << endl;
	cout << "4 -> Search for student by student id" << endl;
	cout << "5 -> Exit" << endl;
}

int main() {
	
	list<Student> *studentList = new list<Student>();
	Main_initializer initialize;

	int choice = 0;
	do {
		menu();
		cout << "Method: ";
		cin >> choice;

		switch (choice){
			case 1:
				initialize.addStudent(studentList);
				break;
			case 2:
				initialize.showList(studentList);
				break;
			case 3:
				initialize.deleteStudent(studentList);
				break;
			case 4:
				initialize.searchStudent(studentList);
				break;
			case 5:
				break;
			default:
				cout << "A wrong choice took place. Please try again.";
		}

	} while (choice != 5);

	return 0;
}