/*
	1.Fedorov Ilya
	2.P2A
	3.C++ v20
	4.C v17
	5.13.03.2023
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>

#include <cstdio>
#include <string>
#include <stdlib.h>

#include "basic.h"
#include "strings.h"
#include "input.h"
#include "factorial.h"

#include <array>
#include <vector>

using std::string;
using std::cout;
using std::cin;
using std::endl;

using std::array;
using std::vector;

float a, b;

void localInput() {

	array<float, 2> ab{getFloat(), getFloat()};

	a = ab[0];
	b = ab[1];

}

vector<float> readNumbers() {
	vector<float> numbers;
	float input = 0.0;

	while (input != 0.0) {
		cin >> input;
		numbers.push_back(input);
	}

	return numbers;
}

float sumVector(vector<float> numbers) {
	float sum = 0.0;

	for (float num : numbers) {
		sum += num;
	}

	return sum;
}

int main_vector() {
	vector<float> numbers = readNumbers();
	float sum = sumVector(numbers);

	cout << "Сумма чисел: " << sum << endl;

	return 0;
}


int sign1 = 0;
int sign2 = 0;

float trigonometry[2];

void menuMain() {
	sign1 = getSign();
	if (sign1 == 1) {
		printf(menuBasicMath().c_str());
		sign2 = getSign();
		if (sign2 == 1) {
			cout << add(a, b) << endl;
		}
		else if (sign2 == 2) {
			cout << sub(a, b) << endl;
		}
		else if (sign2 == 3) {
			cout << multiply(a, b) << endl;
		}
		else if (sign2 == 4) {
			cout << divide(a, b) << endl;
		}
	}
	else if (sign1 == 2) {
		printf(menuFullMath().c_str());
		sign2 = getSign();

		if (sign2 == 1) {
			trigonometry[0] = sin(a);
			trigonometry[1] = sin(b);
			cout << endl << trigonometry[0] << endl << trigonometry[1] << endl << endl;
		}
		else if (sign2 == 2) {
			trigonometry[0] = cos(a);
			trigonometry[1] = cos(b);
			cout << endl << trigonometry[0] << endl << trigonometry[1] << endl << endl;
		}
		else if (sign2 == 3) {
			trigonometry[0] = tan(a);
			trigonometry[1] = tan(b);
			cout << endl << trigonometry[0] << endl << trigonometry[1] << endl << endl;
		}
		else if (sign2 == 4) {
			trigonometry[0] = 1 / tan(a);
			trigonometry[1] = 1 / tan(b);
			cout << endl << trigonometry[0] << endl << trigonometry[1] << endl << endl;
		}

	}
	else if (sign1 == 3) {
		printf(menuMathFunc().c_str());
		sign2 = getSign();

		float perimeter[2];

		if (sign2 == 1) {
			cout << (perimeter[0] + perimeter[1]) / 2 << endl;
		}
		else if (sign2 == 2) {
			cout << a * b << endl;
		}
		else if (sign2 == 3) {
			cout << factorial(a, b) << endl;
		}


	}
}

int main() {
	setlocale(LC_ALL, "Ru-ru");
	printf("Калькулятор v3\n\n");

	cout << "Select version\n1-standart\n2-pro\n";
	int select = 0;
	cin >> select;

	if (select == 1) {
		localInput();

		cout << menu();
		menuMain();

		main();

	}

	else if (select == 2) {
		main_vector();
	}


	return 0;
}
