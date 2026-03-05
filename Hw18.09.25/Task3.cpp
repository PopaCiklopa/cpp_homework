#include <iostream>
#include <windows.h>

void zadanie3() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int S, cost1, cost2, cost3;
	std::cout << "Введите расстояние(в км): ";
	std::cin >> S;
	while (S < 0) {
		std::cout << "\n"  "расстояние не может быть меньше 0: ";
		std::cin >> S;
	}

	int waste = 0;
	std::cout << "\n" << "Затрата топлива(литров) за 100км: ";
	std::cin >> waste;
	while (waste < 0) {
		std::cout << "\n"  "затрата не может быть меньше 0: ";
		std::cin >> waste;
	}

	const int wasteConst = waste;
	std::cout << "\n"  "стоимость 1 вида бензина за литр: ";
	std::cin >> cost1;
	while (cost1 < 0) {
		std::cout << "\n"  "стоимость не может быть меньше 0: ";
		std::cin >> cost1;
	}
	std::cout << "\n" << "стоимость 2 вида бензина за литр: ";
	std::cin >> cost2;
	while (cost2 < 0) {
		std::cout << "\n"  "стоимость не может быть меньше 0: ";
		std::cin >> cost2;
	}
	std::cout << "\n" << "стоимость 3 вида бензина за литр: ";
	std::cin >> cost3;
	while (cost3 < 0) {
		std::cout << "\n"  "стоимость не может быть меньше 0: " << "\n";
		std::cin >> cost3;
	}

	cost1 = wasteConst * cost1;
	cost2 = wasteConst * cost2;
	cost3 = wasteConst * cost3;

	const int sConst = S;
	cost1 = cost1 * sConst / 100;
	cost2 = cost2 * sConst / 100;
	cost3 = cost3 * sConst / 100;

	std::cout << "стоимость поездки на 1 виде бензина: " << cost1 << "\n";
	std::cout << "стоимость поездки на 2 виде бензина: " << cost2 << "\n";
	std::cout << "стоимость поездки на 3 виде бензина: " << cost3 << "\n";
}