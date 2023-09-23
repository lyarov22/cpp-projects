#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sign = 0;

int count = 1;

float getFloat()
{
	cout <<"Введите число " << count << endl;
	count++;
	if (count >= 2) { count == 1; }
	float x;
	cin >> x;
	
	return x;
}

int getSign() {
	printf("\nДействие:\n");
	scanf("%i", &sign);

	return sign;
}
