#include "String.h"

int main() {

	String name, secondName;
	name = "Allanur";
	secondName = "Wellekow";
	String fio = name;
	fio += " "; 
	fio += secondName;
	cout << fio;
	return 0;
}