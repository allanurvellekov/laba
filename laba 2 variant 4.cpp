#include <iostream>
#include <vector>

using namespace std;


class Date {
	int day;
	int month;
	int year;

public:
	Date(int _day = 0, int _month = 0, int _year = 0) {
		day = _day;
		month = _month;
		year = _year;
	}

	void getData() {
		cout << "день: ";
		cout <<day << endl;
		cout << "месяц: ";
		cout << month << endl;
		cout << "год: ";
		cout << year << endl;
	}

	void putData() {
		cout << "Вводите день: ";
		cin >> day;
		cout << "Вводите месяц: ";
		cin >> month;
		cout << "Вводите год: ";
		cin >> year;
	}
};

enum Etype {
	Laborant,
	Sekretar,
	Maneger
};

class Employee {
	static int id;
	float salary;
	Date data;
	Etype type;

public:
	Employee() { 
		id++;
		salary = 0;
	}

	void putEmploy() {
		cout << "Вводите зарплату: ";
		cin >> salary;
		cout << "Вводите дату приема" << endl;
		data.putData();
		cout << "Выберите дольжность" << endl;
		cout << "1) Лаборант" << endl;
		cout << "2) Секретар" << endl;
		cout << "3) Менеджер" << endl;
		int k;
		cin >> k;
		if (k == 1) type = Laborant;
		else if (k == 2) type = Sekretar;
		else type = Maneger;
	}

	void getEmploy() {
		cout << "ID: " << id << endl;
		cout << "Дата приема" << endl;
		data.getData();
		cout << "Дольжность: ";
		if (type == Laborant) cout << "Лаборант" << endl;
		else if (type == Sekretar)
		cout << "Секретар" << endl;
		else 
		cout << "Менеджер" << endl;
	}

};

int Employee::id = 0;

int main() {
	setlocale(LC_ALL, "rus");
	Employee employes[10];

	for (int i = 0; i < 2; i++) {
		cout << "---------------------------------" << endl;
		employes[i].putEmploy();
	}

	cout << endl << endl;
	cout << endl << endl;

	for (int i = 0; i < 2; i++) {
		cout << "---------------------------------" << endl;
		employes[i].getEmploy();
	}

	return 0;
}