#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");

	int x;
	int result = 1;

	std::cout << "Введите целое положительное число: \n";
	std::cin >> x;

	for (int i = 1; i < x+1; ++i)
		result *= i;

	std::cout << "Факториал числа равен: \n" << result << std::endl;
	return 0;
}