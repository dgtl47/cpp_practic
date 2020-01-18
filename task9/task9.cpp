#include <iostream>
#include <stdlib.h>     // srand, rand
#include <time.h>       // time

int main() {
	
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));  // без этой строчки случайные числа будут не случайные, а каждый раз одинаковые!

	int rand_numb = rand() % 101;
	int number;
	bool guess = false;
	bool tryagain = true;
	int attemps = 0;
	int answer;
	
	while (tryagain == true) {
		
		std::cout << "Добро пожаловать в игру! Отгадайте число от 0 до 100! (У вас есть 5 попыток) \nВведите число: \n";
		
		while (guess == false && attemps < 5) {

			std::cin >> number;

			if (number > rand_numb) {
				std::cout << "Загаданное число меньше \n";
				attemps++;
			}

			if (number < rand_numb) {
				std::cout << "Загаданное число больше \n";
				attemps++;
			}

			if (number == rand_numb) {
				std::cout << "Поздравляю! Вы угадали \n";

				guess = true;

				std::cout << "\nХотите попробовать сыграть снова? (1 - ДА) \n";
				std::cin >> answer;
				std::cout << "Добро пожаловать в игру! Отгадайте число от 0 до 100! (У вас есть 5 попыток) \nВведите число: \n";
				
				attemps = 0;
				guess = false;

				if (answer != 1) {
					tryagain = false;
				}
				
			}
		}

		if (attemps == 5) {
			std::cout << "\nВы проиграли! Загаданное число было " << rand_numb;
			std::cout << "\nХотите попробовать сыграть снова? (1 - ДА) \n";
			std::cin >> answer;

			attemps = 0;
			guess = false;

			if (answer != 1)
				tryagain = false;
		}

	}
		return 0;
}