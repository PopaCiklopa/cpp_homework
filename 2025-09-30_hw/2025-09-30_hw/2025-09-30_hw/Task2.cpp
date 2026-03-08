#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>


void zadanie2()
{
	srand(time(NULL));

	int arr[10];
	int range = 0;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 21 - 10;
		std::cout << arr[i] << ' ';
	}

	std::cout << '\n' << "¬ведите число диапазона меньше которого будет суммирование: ";
	std::cin >> range;

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] < range) {
			sum += arr[i];
		}
	}
	std::cout << '\n' << "—умма чисел которые меньше диапазона: " << sum;
}