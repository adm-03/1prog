#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

using namespace std;


class Student {
	char* surname;
	int age;
	float average;
public:
	Student(int, float);
	Student();
	Student(const Student&);
	~Student();

	void print();
	void change_surname(char*);
	void change_age(int);
	void change_average(float);

	friend Student operator - (Student&, Student&);
	Student operator + (Student&);
	Student& operator = (const Student&);
	Student& operator ++ ();
	Student operator ++ (int);
	operator int();
};
