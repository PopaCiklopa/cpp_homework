#include <iostream>
#include <windows.h>

void zadanie1() {
	int num = 0;
	int a = num;
	int sum_right = 0;
	int sum_left = 0;
	bool iteration = true;
	do { 
		if (iteration) {
			iteration = false;
		}
		else {
			std::cout << "ќшибка! ";
		}

		std::cout << "¬ведите шестизначное число: ";
		std::cin >> num;



	} while (num < 100000 or num > 999999);

	for (int i = 0; i < 6; i++) {
		if (i < 3) {
			sum_right += (num % 10);

		}
		else {
			sum_left += (num % 10);

		}
		num /= 10;
	}


	if (sum_right == sum_left) {
		std::cout << "¬аши числа €вл€ютс€ счастливыми!";
	}
	else {
		std::cout << "¬аши числа не €вл€ютс€ счастливыми!";
	}

}