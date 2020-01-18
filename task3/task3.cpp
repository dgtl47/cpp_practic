#include <iostream>
#define mathoutput(a, b) std::cout << "Сумма: \n" << a + b << std::endl; \
std::cout << "Разность: \n" << a - b << std::endl; \
std::cout << "Произведение: \n" << a * b << std::endl; \
std::cout << "Частное: \n" << a / b << std::endl;

int main() {
	
	setlocale(LC_ALL, "Russian");
	
	int int1, int2;
	std::cout << "Последовательно введите значение двух переменных: \n";
	std::cin >> int1 >> int2;
	mathoutput(int1, int2);

	double double1, double2;
	std::cout << "Последовательно введите значение двух переменных: \n";
	std::cin >> double1 >> double2;
	mathoutput(double1, double2);

	int int3;
	double double3;
	std::cout << "Последовательно введите значение двух переменных: \n";
	std::cin >> int3 >> double3;
	mathoutput(int3, double3);

	double double4;
	int int4;
	std::cout << "Последовательно введите значение двух переменных: \n";
	std::cin >> double4 >> int4;
	mathoutput(double4, int4);
	
	return 0;
}