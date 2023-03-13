/*
* 1. Fedorov Ilya
* 2. P2A
* 3. C++ - 20
* 4. C - 17
* 5. 06032023
*/

#include<iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c;
	cout << " a: \n";
	cin >> a;
	cout << " b: \n";
	cin >> b;
	c = a + b;
	cout << a << " + " << b << " = " << c << endl;
	c = a - b;
	cout << a << " - " << b << " = " << c << endl;
	c = a * b;
	cout << a << " * " << b << " = " << c << endl;
	c = a / b;
	cout << a << " / " << b << " = " << c << endl;
	c = sqrt(a);
	cout << "koren iz " << a << " = " << c << endl;
	c = sqrt(b);
	cout << "koren iz " << b << " = " << c << endl;
	c = pow(a, b);
	cout << a << "^" << b << " = " << c << endl;
}