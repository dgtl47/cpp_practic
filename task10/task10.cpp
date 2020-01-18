#include <iostream>
#include <clocale>

int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	int result = 1;
	
	std::cout << "Введите число: \n";
	std::cin >> x;

	std::cout << "Введите степень: \n";
	std::cin >> y;
	
	for (int i = 0; i < y; ++i) 
			result *= x;

	std::cout << result << std::endl;
return 0;
}