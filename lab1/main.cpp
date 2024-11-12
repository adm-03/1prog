#include "headers.h"

void main() {
	Student first;
	Student second;

	char *name = new char[20];
	int age;
	double average;
	cout << "name >";
	cin >> name;
	cout << "age >";
	cin >> age;
	cout << "average >";
	cin >> average;
	first.change_surname(name);
	first.change_age(age);
	first.change_average(average);
	

	char* name2 = new char[20];
	cout << "new student" << endl;
	cout << "name >";
	cin >> name2;
	cout << "age >";
	cin >> age;
	cout << "average >";
	cin >> average;
	second.change_surname(name2);
	second.change_age(age);
	second.change_average(average);
	

	first.print();
	second.print();

	first.sum(second);

	delete[] name;
	delete[] name2;
}	