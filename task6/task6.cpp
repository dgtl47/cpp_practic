#include <iostream>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");

	double a, b, c;

	std::cout << "Введите a: \n";
	std::cin >> a;

	std::cout << "Введите b: \n";
	std::cin >> b;

	std::cout << "Введите c: \n";
	std::cin >> c;
	std::cout << std::endl;

	if (a == 0 && b == 0) {
		if (c == 0) std::cout << "x = R \n";
		else std::cout << "Решений нет \n";
		return 0;
	}

	if (a == 0) {
		std::cout << "x = " << -c / b << std::endl;
		return 0;
	}
	double D, x1, x2;

	D = b * b - 4 * a * c;

	if (D < 0)
	{
		x1 = (-b + sqrt(-D)) / (2 * a);
		x2 = (-b - sqrt(-D)) / (2 * a);
		std::cout << "Дискриминант < 0 \n" << "Действительных корней нет \n";
	}
	else if (D > 0)
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		std::cout << "Дискриминант > 0 \n" << "x1 = " << x1 << " x2 = " << x2 << "\n";
	}
	else if (D == 0)
	{
		x1 = x2 = (-b) / (2 * a);
		std::cout << "x1 = " << x1 << " x2 = " << x2 << "\n";
	}

	return 0;
}