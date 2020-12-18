#include "String.h"
#include <string>

class Fakultet {
protected:
	String facultyname;

public:
	Fakultet() {};
	~Fakultet() {}

	String getfacultyName() { return facultyname; }
	void setfacultyname(String na) { facultyname = na; }

};


class Student : public Fakultet {
	String name;
	String secname;
	int year;
	float avg;

public:
	Student() {}
	~Student() {}

	Student(String nam, String secnam, String facult, int yea, float a) {
		name = nam;
		secname = secnam;
		facultyname = facult;
		year = yea;
		avg = a;
	}

	String getStudName() { return name; }
	String getStudSecName() { return secname; }
	int getYear() { return year; }
	float getAvg() { return avg; }

	void setAbg(float a) { avg = a; }
	void setStud(String s) { name = s; }
	void setSec(String s) { secname = s; }
	void setyear(int y) { year = y; }

	void show() {
		cout << "Факультет: " << facultyname << endl;
		cout << "Имя студента: " << name << endl;
		cout << "Фамилия студента: " << secname << endl;
		cout << "Год рождения: " << year << endl;
		cout << "Средний бал последней сессий: " << avg << endl;
	}
};

int main() {
	setlocale(LC_ALL, "rus");
	Student s1("Allanur", "Wellekow", "FKP", 1999, 4);
	Student s2("Nedir", "Nazarow", "IEF", 2000, 5);
	Student s3("Ivan", "Ivanow", "FKP", 1998, 8);
	
	cout << "----------------------" << endl;
	cout << "Студент 1" << endl;
	s1.show();
	cout << "----------------------" << endl;
	cout << "Студент 2" << endl;
	s2.show();
	cout << "----------------------" << endl;
	cout << "Студент 3" << endl;
	s3.show();
	return 0;
}
