#include "headers.h"

Student::Student() {
	age = 18;
	average = 4.65;
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

void Student::sum(Student a) {
	cout << a.surname << "+" << surname << ":\n"<< "age:" << a.age + age << "\naverage:" << a.average + average << endl;
}