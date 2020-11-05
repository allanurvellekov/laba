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
		cout << "����: ";
		cout <<day << endl;
		cout << "�����: ";
		cout << month << endl;
		cout << "���: ";
		cout << year << endl;
	}

	void putData() {
		cout << "������� ����: ";
		cin >> day;
		cout << "������� �����: ";
		cin >> month;
		cout << "������� ���: ";
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
		cout << "������� ��������: ";
		cin >> salary;
		cout << "������� ���� ������" << endl;
		data.putData();
		cout << "�������� ����������" << endl;
		cout << "1) ��������" << endl;
		cout << "2) ��������" << endl;
		cout << "3) ��������" << endl;
		int k;
		cin >> k;
		if (k == 1) type = Laborant;
		else if (k == 2) type = Sekretar;
		else type = Maneger;
	}

	void getEmploy() {
		cout << "ID: " << id << endl;
		cout << "���� ������" << endl;
		data.getData();
		cout << "����������: ";
		if (type == Laborant) cout << "��������" << endl;
		else if (type == Sekretar)
		cout << "��������" << endl;
		else 
		cout << "��������" << endl;
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