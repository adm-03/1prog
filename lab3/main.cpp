#include "headers.h"
#include <fstream>

void main() {
	//Student first;
	//first.print();
	//Student second{ 10, 4 };
	//second.print();
	//char sString[] = "summ";
	//char* s = sString;
	//char* name = new char[20];
	//int age;
	//float average;
	//cout << "name >";
	//cin >> name;
	//cout << "age >";
	//cin >> age;
	//cout << "average >";
	//cin >> average;
	//first.change_surname(name);
	//first.change_age(age);
	//first.change_average(average);
	//first.print();


	//char* name2 = new char[20];
	//cout << "new student" << endl;
	//cout << "name >";
	//cin >> name2;
	//second.change_surname(name2);
	//second.print();

	////cout << "+" << endl;
	//Student third = second + first;
	////third.change_surname(s);
	////third.print();

	////cout << "-" << endl;
	//third = second - first;
	////third.print();

	//Student pref = ++third;
	//Student post = third++;
	///*cout << "pref" << endl;
	//pref.print();
	//cout << "post" << endl;
	//post.print();
	//third.print();*/

	//Student fourth = first;
	///*cout << "= class" << endl;
	//fourth.print();*/

	////cout << "int(fourth): " << int(fourth) << endl;
	//delete[] name;
	//delete[] name2;

	Student fourth(2024, 5);
	fourth.change_surname((char*)"jora");


	ofstream file("double.bin", ios::binary);
	if (file.is_open()) {
		file << fourth;
		file.close();
	}

	ifstream rfile("double.bin", ios::binary);
	Student test;
	if (rfile.is_open()) {
		rfile >> test;
		rfile.close();
	}
	test.print();

	ofstream wfile("test.txt");
	if (wfile.is_open()) {
		fourth.output(wfile);
		wfile.close();
	}
}