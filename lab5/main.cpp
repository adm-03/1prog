#include "headers.h"
#include <fstream>

void main() {

	Student fourth(2024, 5);
	fourth.change_surname((char*)"jora");

	Ex_student a(4);
	a.change_surname((char*)"albert");
	a.print();

	Ex_student b(a);
	b.print();

	fourth.print();
	a.print();

	Student* r;
	r = &fourth;
	/*r = new Debtor(1);
	r->change_surname((char*)"oleg");*/
	r->print();

	r = &a;
	r->print();
}