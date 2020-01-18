#include <iostream>

int main() {

	int number;

	std::cout << "Введите целое положительное число для проверки:\n";
	std::cin >> number;

	for (int i = number - 1; i > 1; i--) {
		if (number % i == 0) {
			std::cout << "Число составное\n";
			return 0;
		}
	}

	std::cout << "Число простое\n";

	return 0;
}