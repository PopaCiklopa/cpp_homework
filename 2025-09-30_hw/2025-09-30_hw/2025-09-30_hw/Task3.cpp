#include <iostream>
#include <windows.h>

void zadanie3() {

	int arr[12];
	std::cout << "¬ведите прибыль за год." << '\n';
	for (int i = 0; i < 12; i++) {
		std::cout << "«а " << i + 1 << " мес€ц: ";
		std::cin >> arr[i];
	}
	int minMonth = 0;
	int maxMonth = 0;
	int minRange = 0;
	int maxRange = 0;

	std::cout << "¬ведите диапозон мес€цев." << '\n';
	std::cout << "ќт(1-12): ";
	std::cin >> minRange;
	std::cout << '\n' << "ƒо(1-12): ";
	std::cin >> maxRange;

	int minMonthNum = minRange;
	int maxMonthNum = maxRange;
	minMonth = arr[minRange - 1];
	maxMonth = arr[maxRange - 1];

	for (int i = minRange - 1; i <= maxRange - 1; i++) {

		if (minMonth > arr[i]) {
			minMonth = arr[i];
			minMonthNum = i + 1;
		}
		if (maxMonth < arr[i]) {
			maxMonth = arr[i];
			maxMonthNum = i + 1;
		}
	}
	std::cout << '\n' << "ћеньша€ прибыль была за: " << minMonthNum << " ћес€ц";
	std::cout << '\n' << "Ѕольша€ прибыль была за: " << maxMonthNum << " ћес€ц";
}