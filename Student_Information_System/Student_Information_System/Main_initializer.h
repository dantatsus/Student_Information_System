#pragma once
#include <iostream>
#include <list>
#include "Student.h"

using namespace std;

class Main_initializer {
public:
	void addStudent(list<Student> *lst);
	void showList(list<Student>* lst);
	void deleteStudent(list<Student>* lst);
	void searchStudent(list<Student>* lst);
};