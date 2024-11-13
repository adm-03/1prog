#include "headers.h"

void main() {
	Student first;
	Student second;
	char sString[] = "summ";
	char *s = sString;
	char *name = new char[20];
	int age;
	float average;
	cout << "name >";
	cin >> name;
	cout << "age >";
	cin >> age;
	cout << "average >";
	cin >> average;
	first.change_surname(name);
	first.change_age(age);
	first.change_average(average);
	first.print();


	char* name2 = new char[20];
	cout << "new student" << endl;
	cout << "name >";
	cin >> name2;
	second.change_surname(name2);
	second.print();

	Student third = second + first;
	third.change_surname(s);
	third.print();

	Student fourth(first);
	cout << "copy class" << endl;
	fourth.print();
	delete[] name;
	delete[] name2;
}	