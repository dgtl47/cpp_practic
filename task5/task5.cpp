#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	double x0, v0, t;
	const double g = -9.8;

	std::cout << "Последовательно введите значения параметров x0, v0 и t: \n";
	std::cin >> x0 >> v0 >> t;

	if (t > 0) std::cout << "Объект преодолеет расстояние: " << x0 + v0 * t + g * t * t / 2 << std::endl;
	else std::cout << "Некоректное значение параметра, попробуйте снова \n";

	if (t > 0) std::cout << "Объект преодолеет расстояние: " << x0 + v0 * t + 1/2 * g * t * t << std::endl;
	else std::cout << "Некоректное значение параметра, попробуйте снова \n";

	return 0;
}