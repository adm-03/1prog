#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

using namespace std;


class Student {
	char* surname;
	int age;
	float average;
public:
	Student(int s_age = 15, float s_average = 4.5);
	~Student();
	void print();
	void change_surname(char*);
	void change_age(int);
	void change_average(float);
	Student operator + (Student&);
};
