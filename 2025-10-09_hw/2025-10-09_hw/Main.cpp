#include <iostream>
#include <windows.h>
#include <string>

const int MAX_LONG = 20;

int arrCount = 0;
double prices[MAX_LONG];
int countV[MAX_LONG];
std::string names[MAX_LONG];

double discount = 0;
double sum = 0;

void showMenu() {
	std::cout << "\nМагазин Соки Никиты.\n";
	std::cout << "Выберите 1 чтобы выбрать фруктовые соки.\n";
	std::cout << "Выберите 2 чтобы выбрать овощные соки.\n";
	std::cout << "Выберите 3 чтобы выбрать чаи.\n";
	std::cout << "Выберите 4 чтобы посмотреть корзину.\n";
	std::cout << "Выберите 5 чтобы завершить покупку.\n";

}

void addItem(std::string name, double price) {
	if (arrCount >= MAX_LONG) {
		std::cout << "Корзина заполнена";
		return;
	}
	int V;
	std::cout << "Введите количество (в литрах)";
	std::cin >> V;
	names[arrCount] = name;
	countV[arrCount] = V;
	prices[arrCount] = price * V;

	arrCount++;
}

void removeItem() {
	std::cout << "Выберите номер товара для удаления: ";
	for (int i = 0; i < arrCount; i++) {
		std::cout << i + 1 << ". " << names[i] << "\n";
	}
	int del = 0;
	std::cin >> del;
	del--;

	if (del < 0 || del >= arrCount) {
		std::cout << "Неверный номер!\n";
		return;
	}

	for (int i = del; i < arrCount - 1; i++) {
		names[i] = names[i + 1];
		countV[i] = countV[i + 1];
		prices[i] = prices[i + 1];
	}
	names[arrCount - 1] = "";
	countV[arrCount - 1] = 0;
	prices[arrCount - 1] = 0;
	arrCount--;

	std::cout << "Товар удалён! ";
	// в переменную ввод-> и замена см выше здесь
}
//доделать скидки и чек и тд
void showCart() {
	if (arrCount == 0) {
		std::cout << "Корзина пустая";
		return;
	}

	int answer = 0;

	for (int i = 0; i < arrCount; i++) {
		std::cout << names[i] << "\n";
		std::cout << countV[i] << "\n";
	}
	std::cout << "1. Вернуться" << '\n' << "2. Удалить товар из списка" << '\n';
	std::cin >> answer;
	if (answer == 1) return;
	if (answer == 2) removeItem();
}

void fruits() {
	int choice = 0;
	std::cout << "1. яблочный\n";
	std::cout << "2. апельсиновый\n";
	std::cout << "3. абрикосовый\n";
	std::cout << "4. грушевый\n";
	std::cin >> choice;
	if (choice == 1) addItem("яблочный сок", 120);
	if (choice == 2) addItem("апельсиновый сок", 130);
	if (choice == 3) addItem("абрикосовый сок", 140);
	if (choice == 4) addItem("грушевый сок", 125);
}

void vegetables() {
	int choice = 0;
	std::cout << "1. томатный\n";
	std::cout << "2. луковый\n";
	std::cout << "3. огуречный\n";
	std::cin >> choice;
	if (choice == 1) addItem("томатный сок", 110);
	if (choice == 2) addItem("луковый сок", 150);
	if (choice == 3) addItem("огуречный сок", 105);
}
void teas() {
	int choice = 0;
	std::cout << "1. чесночный\n";
	std::cout << "2. петрушевый\n";
	std::cin >> choice;
	if (choice == 1) addItem("чесночный чай", 90);
	if (choice == 2) addItem("петрушевый чай", 95);
}

void receipt() {
	std::cout << '\n' << "ЧЕК" << '\n';
	std::cout << "Итого: " << sum << '\n';
	std::cout << "Скида и акции: " << discount;
}

void checkout() {


	for (int i = 0; i < arrCount; i++) {
		if (names[i] == "петрушевый чай" && countV[i] > 3) {
			double d = prices[i] * 0.05;
			prices[i] -= d;
			discount += d;
		}
	}
	for (int i = 0; i < arrCount; i++) {
		if (names[i] == "луковый сок" && countV[i] > 3) {
			int freeLiters = countV[i] / 4;
			double dis = freeLiters * 150.0;
			discount += dis;
			prices[i] -= dis;
		}
	}

	for (int i = 0; i < arrCount; i++) {
		sum += prices[i];
	}
	if (sum > 1000) {
		double d = sum * 0.13;
		discount += d;
		sum -= d;
	}
	receipt();
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);



	int choice = 0;
	while (choice != 5) {
		showMenu();
		std::cin >> choice;


		if (choice == 1) fruits();
		if (choice == 2) vegetables();
		if (choice == 3) teas();
		if (choice == 4) showCart();

	}

	checkout();




	return 0;
}