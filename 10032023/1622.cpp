#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int task5() {
	float y = 0;
	float a = 0;
	float b = 0;

	float c = 9;
	float x = 8.52;

	cout << "Task5\n\n" << std::endl;
	
	b = x + c * c;

	a = pow((fabs(b + c)), 1 / 3);

	y = pow(cos(b), 2) + b * pow(cos(a * a), 4);
	
	cout << b << std::endl;
	cout << a << std::endl;
	cout << y << std::endl;

	return 0;
}

