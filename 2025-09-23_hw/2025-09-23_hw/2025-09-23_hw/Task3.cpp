#include <iostream>
#include <windows.h>

void zadanie3() {
	int num, maxNum;
	int i = 0;

	std::cout << "Введите 1 число: ";
	std::cin >> num;
	maxNum = num;

	while (i < 6) {
		std::cout << "Введите " << i + 2 << " число:";
		std::cin >> num;
		if (num > maxNum) {
			maxNum = num;
		}
		i++;
	}
	std::cout << "Максимальное число из списка: " << maxNum;
}	
