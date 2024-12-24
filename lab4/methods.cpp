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

ostream& operator << (ostream& ofs, const Student& c) {
	ofs.write((const char*)&c.age, sizeof(int));
	ofs.write((const char*)&c.average, sizeof(float));
	size_t n = strlen(c.surname) + 1;
	ofs.write((const char*)&n, sizeof(size_t));
	ofs.write((const char*)c.surname, sizeof(char) * n);
	return ofs;
}
istream& operator >> (istream& ofs, Student& c) {
	size_t n;

	ofs.read((char*)&c.age, sizeof(int));
	ofs.read((char*)&c.average, sizeof(float));
	ofs.read((char*)&n, sizeof(size_t));
	delete[] c.surname;
	c.surname = new char[n];
	ofs.read(c.surname, sizeof(char) * n);

	/*c.change_age(a);
	c.change_average(b);*/


	return ofs;
}

void Student::output(ostream& os) {
	if (surname != NULL) {
		os << surname << " " << age << " " << average << endl;
	}
	else {
		os << age << " " << average << " " << endl;
	}
}


Ex_student::Ex_student(int ex) {
	ex_grades = ex;
}

void Ex_student::print() {
	if (surname != NULL) {
		cout << surname << " " << age << " " << average << " " << ex_grades << endl;
	}
	else {
		cout << age << " " << average << " " << ex_grades << endl;
	}
}


Debtor::Debtor(int deb) {
	debts = deb;
}

void Debtor::print() {
	if (surname != NULL) {
		cout << surname << " " << age << " " << average << " " << debts << endl;
	}
	else {
		cout << age << " " << average << " " << debts << endl;
	}
}