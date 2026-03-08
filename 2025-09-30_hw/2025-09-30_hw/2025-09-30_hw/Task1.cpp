#include <iostream>
#include <windows.h>
#include <cstdlib>  
#include <ctime> 

void zadanie1() {
	srand(time(NULL));

	int arr[7];

	for (int i = 0; i < 7; i++) {
		arr[i] = rand() % 10;
		std::cout << arr[i] << '\n';
	}

	int minNum = arr[0];
	int maxNum = arr[0];
	for (int i = 0; i < 7; i++) {
		if (minNum > arr[i]) {
			minNum = arr[i];
		}
	}
	for (int i = 0; i < 7; i++) {
		if (maxNum < arr[i]) {
			maxNum = arr[i];
		}
	}
	std::cout << "Минимальный элемент из списка: " << minNum << '\n';
	std::cout << "Максимальный элемент из списка: " << maxNum;
}