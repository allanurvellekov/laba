#include <cmath> // подключаем sqrt
#include <iostream>
#include <iomanip>
using namespace std;

double diskriminant(double b, double a, double c) {
	return b * b - 4 * a * c;
}

void show(double x) {
	
	cout << setw(10) << setfill('#') << '\n';
	cout << setw(8) << setprecision(4) << x << '#' << '\n';
	cout << setw(10) << setfill('#') << '\n';
}

void show(double x1, double x2) {
	cout << setw(10) << setfill('#') << '\n';
	cout << setw(8) << setprecision(4) << x1 << '#' << '\n';
	cout << setw(8) << setprecision(4) << x2 << '#' << '\n';
	cout << setw(10) << setfill('#') << '\n';
}


int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c, d, x1, x2; // Объявляем переменные с плавающей точкой.

	cout << "Введите a\n"; // Вводим исходные данные
	cin >> a;
	cout << "Введите b\n";
	cin >> b;
	cout << "Введите c\n";
	cin >> c;

	cout << endl;

	d = diskriminant(b, a, c); // Рассчитываем дискриминант

	if (d > 0) // Условие при дискриминанте больше нуля
	{
		x1 = ((-b) + sqrt(d)) / (2 * a);
		x2 = ((-b) - sqrt(d)) / (2 * a);

		//cout << "x1 = " << x1 << "\n";
		//cout << "x2 = " << x2 << "\n";
		
		show(x1, x2);
	}
	if (d == 0) // Условие для дискриминанта равного нулю
	{
		x1 = -(b / (2 * a));
		//cout << "x1 = x2 = " << x1 << "\n";
		
		show(x1);

	}
	if (d < 0) // Условие при дискриминанте меньше нуля
		cout << "D < 0, Действительных корней уравнения не существует";
	
	cout << endl;
	
	return 0;
}