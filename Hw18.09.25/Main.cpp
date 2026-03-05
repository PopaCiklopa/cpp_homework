#include <iostream>
#include <windows.h>


void zadanie1();
void zadanie2();
void zadanie3();


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int choice;

	do {

		std::cout << "Домашнее задание" << "\n\n";

		std::cout << "1. Задание 1" << std::endl;
		std::cout << "2. Задание 2" << std::endl;
		std::cout << "3. Задание 3" << std::endl;

		std::cout << "0. Выход" << std::endl;
		std::cout << "=============================" << std::endl;
		std::cout << "Выберите задание: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			std::cout << "\n=== ЗАДАНИЕ 1 ===" << std::endl;
			zadanie1();
			break;
		case 2:
			std::cout << "\n=== ЗАДАНИЕ 2 ===" << std::endl;
			zadanie2();
			break;
		case 3:
			std::cout << "\n=== ЗАДАНИЕ 3 ===" << std::endl;
			zadanie3();
			break;
		case 0:
			std::cout << "Выход из программы" << std::endl;
			break;
		default:
			std::cout << "Такого выбора нет" << std::endl;
		}

		if (choice != 0) {
			std::cout << "\nНажмите Enter для продолжения...";
			std::cin.ignore();
			std::cin.get();
		}

	} while (choice != 0);

	return 0;
}
