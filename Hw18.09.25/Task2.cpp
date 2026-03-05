#include <iostream>
#include <windows.h>

void zadanie2() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int h1, m1, s1, h2, m2, s2;

	std::cout << "\nВремя начала:" << std::endl;
	std::cout << "Часы: ";
	std::cin >> h1;
	std::cout << "Минуты: ";
	std::cin >> m1;
	std::cout << "Секунды: ";
	std::cin >> s1;

	std::cout << "\nВремя окончания:" << std::endl;
	std::cout << "Часы: ";
	std::cin >> h2;
	std::cout << "Минуты: ";
	std::cin >> m2;
	std::cout << "Секунды: ";
	std::cin >> s2;

	int time1 = h1 * 3600 + m1 * 60 + s1;

	int time2 = h2 * 3600 + m2 * 60 + s2;

	int diff = time2 - time1;

	int res = 0;
	if (diff % 60 > 0) {
		res = res + 1;
	}
	res = diff / 60 * 2;

	std::cout << "С вас: " << res << "гривны" << std::endl;
}