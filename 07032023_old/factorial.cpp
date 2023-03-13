#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int factorial(int a, int b)
{
	int res;

	res = 1;
	for (b = 1; b <= a; b++) {
		res = res * b;
	}
	return res;
}