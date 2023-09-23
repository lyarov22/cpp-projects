#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int task3() {
	float P = 0;
	float x = 0;
	float y = 0;
	float t = 0;

	float e = exp(1);

	cout << "Task3\n\n";

	cin >> x;
	cin >> y;
	cin >> t;

	P = (pow((sin(x)), 3) + log(2 * y + 3 * x) / (pow(t, e) + sqrt(x)));

	cout << P;

	return 0;
}

