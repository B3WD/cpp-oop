#pragma once

class Student {
private:
	char* _name;
	char* _fn;
	int _age;
	double _gradeAvg;
	int _classYear;

public:
	Student();
	Student(char* name, char* fn, int age, double avgGrade, int classYear);
	~Student();
};