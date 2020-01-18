#include <iostream>

int main() {
	
	setlocale(LC_ALL, "Russian");
	
	int a, b, temp;
	
	std::cout << "Последовательно введите значения двух переменных: \n";
	std::cin >> a >> b;
	
	temp = a;
	a = b;
	b = temp;
	
	std::cout << a << std::endl << b << std::endl;

	std::cout << "Последовательно введите значения двух переменных: \n";
	std::cin >> a >> b;

	std::swap(a, b);
	std::cout << a << std::endl << b << std::endl;

	std::cout << "Последовательно введите значения двух переменных: \n";
	std::cin >> a >> b;

	a = a + b; // a = 10 + 15 = 25 (a = 10)
	b = a - b; // b = 25 - 15 = 10 (b = 10)
	a = a - b; // 25 - 10 = 15 (a = 15)
	
	std::cout << a << std::endl << b << std::endl;

	return 0;
}