#include <iostream>
#include <string>
#include "strings.h"

using std::string;
using std::cout;
using std::endl;

void clearConsole() {
	system("CLS");
}

void choice() {
	cout << "Выберите действие:" << endl;
}

string menu() {
	clearConsole();
	choice();
	return "1 - Базовая математика \n2 - Тригонометрия \n3 - Математические функции\n";
}

string menuBasicMath() {
	clearConsole();
	choice();
	return "1 - Сложение \n2 - Вычитание \n3 - Умножение \n4 - Деление\n";
}

string menuFullMath() {
	clearConsole();
	choice();
	return "1 - Синус \n2 - Косинус \n3 - Тангенс \n4 - Котангенс\n";
}

string menuMathFunc() {
	clearConsole();
	choice();
	return "1 - Периметр прямоугольника\n2 - Площадь прямоугольника\n3 - Факториал\n";
}

