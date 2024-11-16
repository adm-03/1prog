#include "headers.h"

Student::Student(int s_age, float s_average) {
	age = s_age;
	average = s_average;
	surname = new char[1];
	surname[0] = '\0';

}

Student::Student() {
	age = 17;
	average = 4.5;
	surname = new char[1];
	surname[0] = '\0';
}

Student::Student(const Student& s) {
	this->age = s.age;
	this->average = s.average;
	this->surname = new char[strlen(s.surname) + 1];
	strcpy(this->surname, s.surname);

}

Student::~Student() {
	delete[] surname;
}

void Student::print() {
	if (surname != NULL) {
		cout << surname << " " << age << " " << average << endl;
	}
	else {
		cout << age << " " << average << " " << endl;
	}
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
Student operator - (Student& student1, Student& student2) {
	return Student{ student1.age - student2.age, student1.average - student2.average };
}

Student Student::operator + (Student& student) {
	return Student{ age + student.age, average + student.average };
}

Student& Student::operator = (const Student& s) {
	this->age = s.age;
	this->average = s.average;
	this->surname = new char[strlen(s.surname) + 1];
	strcpy(this->surname, s.surname);

	return *this;
}

Student& Student::operator ++ () {
	this->age++;
	this->average++;
	return *this;
}
Student Student::operator ++ (int) {
	Student copy(*this);

	this->age++;
	this->average++;

	return copy;
}

Student::operator int() {
	return int(this->average);
}