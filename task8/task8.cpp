#include <iostream>

int main() {

	setlocale(LC_ALL, "Russian");

	double a, b;
	char switch_on(',');

	std::cout << "Введите любое вещественное число: \n";
	std::cin >> a;
	
	std::cout << "Введите знак операции: \n";
	std::cin >> switch_on;
	
	std::cout << "Введите любое вещественное число: \n";
	std::cin >> b;
	
	switch (switch_on)
	{
	case '+':
		std::cout << a << " + " << b << " = " << a + b << std::endl;
		break;
	
	case '-':
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		break;
	
	case '*':
		std::cout << a << " * " << b << " = " << a * b << std::endl;
		break;
	
	case '/':
		if (b == 0)
			std::cout << "Ошибка! На ноль делить нельзя! \n";
		else std::cout << a << " / " << b << " = " << a / b << std::endl;
		break;

	default:
		std::cout << "Ошибка! Введите корректное значение: \n";
		break;
	}

	return 0;
}