#include <iostream>
#include <windows.h>

void zadanie2() {
	int num = 0;
	bool iteration = true;
	int a, b, c, d, e;

	do {
		if (iteration) {
			iteration = false;
		}
		else {
			std::cout << "Ошибка! ";
		}

		std::cout << "Введите четырёхзначное число: ";
		std::cin >> num;



	} while (num < 1000 or num > 9999);

	for (int i = 0; i < 4; i++) {
		if (i < 1) {
			a = num % 10;
			b = a;
		}
		if (i < 2) {
			a = num % 10;
			c = a;
		}
		if (i < 3) {
			a = num % 10;
			d = a;
		}
		else {
			a = num % 10;
			e = a;
		}
		num /= 10;
	}
	std::cout << "Результат: " << d << e << b << c;



}