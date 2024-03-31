#pragma once
#include <iostream>

using namespace std;

class Student {
private:
	// Variables
	int id;
	string name;
	int examGrade;

public:
	// Constructor
	Student(int _id, string _name, int _examGrade);

	// Setters
	void setId(int _id);
	void setName(string _name);
	void setExamGrade(int _examGrade);

	// Getters
	int getId();
	string getName();
	int getExamGrade();

	void showInformations();
};

