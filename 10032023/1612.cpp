#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int task2() {
	float W = 0;
	float t = 0;
	float r = 0;
	float y = 0;

	cout << "Task2\n\n";

	cin >> t;
	cin >> r;
	cin >> y;

	float e = exp(1);

	W = (4 * t * t * t + log(r)) / (pow(e, (y + r)) + 7.2 * sin(r));

	cout << W;

	return 0;
}

