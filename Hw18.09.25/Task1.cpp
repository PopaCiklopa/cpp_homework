#include <iostream>
#include <windows.h>

void zadanie1() {


	double a, b, c;


	do {
		std::cout << "Введите расстояние до аэропорта в км: " << '\n';
		std::cin >> a;

		if (a <= 0) {
			if (a == 0) {
				std::cout << "Расстояние не может быть равно 0!" << '\n' << '\n';
			}
			else {
				std::cout << "Расстояние не может быть отрицательным!" << '\n' << '\n';
			}
			Sleep(1500);
		}
	} while (a <= 0);

	do {
		std::cout << "За сколько часов вам нужно туда добраться: " << '\n';
		std::cin >> b;

		if (b <= 0) {
			if (b == 0) {
				std::cout << "Время не может быть равно 0!" << '\n' << '\n';
			}
			else {
				std::cout << "Время не может быть отрицательным!" << '\n' << '\n';
			}
			Sleep(1500);
		}
	} while (b <= 0);

	c = a / b;
	std::cout << "Вам нужно ехать со скоростью " << c << "км/ч" << std::endl;
}