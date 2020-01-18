#include <iostream>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Russian");

	std::cout << "Выберите способ рассчета площади треугольника: \n 1 - через длины сторон \n 2 - через координаты вершин \n";

	int square_method;
	std::cin >> square_method;

	double a, b, c, p;
	double x1, x2, y1, y2, z1, z2;

	switch (square_method) {
	case 1:
		std::cout << "Последовательно введите длины сторон треугольника a, b и c: \n";
		std::cin >> a >> b >> c;

		if ((a + b) > c && (a + c) > b && (b + c) > a && (a > 0) && (b > 0) && (c > 0)) {
			p = (a + b + c) / 2;
			std::cout << "Площадь треугольника равна: " << sqrt(p * (p - a) * (p - b) * (p - c)) << std::endl;
		}
		else std::cout << "Указаны неверные параметры сторон треугольника! \n";

		break;

	case 2:
		std::cout << "Попарно введите координаты вершин x и y: \n";

		std::cout << "Координаты первой стороны: \n";
		std::cin >> x1 >> x2;

		std::cout << "Координаты второй стороны: \n";
		std::cin >> y1 >> y2;

		std::cout << "Координаты третей стороны: \n";
		std::cin >> z1 >> z2;

		a = abs(x1 - x2);
		b = abs(y1 - y2);
		c = abs(z1 - z2);

		if ((a + b) > c && (a + c) > b && (b + c) > a && (a > 0) && (b > 0) && (c > 0)) {
			p = (a + b + c) / 2;
			std::cout << "Площадь треугольника равна: " << sqrt(p * (p - a) * (p - b) * (p - c)) << std::endl;
		}
		else std::cout << "Указаны неверные параметры сторон треугольника! \n";

		break;
	default:
		std::cout << "Ошибка! Введите 1 или 2: \n";
	}
	return 0;
}