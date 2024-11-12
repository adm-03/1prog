#include "headers.h"

Student::Student(int s_age, float s_average) {
	age = s_age;
	average = s_average;
	surname = new char[1];
	surname[0] = '\0';
}

Student::~Student() {
	delete[] surname;
}

void Student::print(){
	cout << surname << " " << age << " " << average<<endl;
}

void Student::change_surname(char* n) {
	if (surname != NULL) {
		delete[] surname;
	}
	
	surname = new char[strlen(n) + 1];
	strcpy(surname, n);
}
void Student::change_age(int n) {
	age = n;
}
void Student::change_average(float n) {
	average = n;
}

Student Student::operator + (Student& student) {
	return Student{ age + student.age, average + student.average };
}