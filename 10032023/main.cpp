#include <iostream>

#include "main.h"

using namespace std;

int main() {
	int a;
	cout << "\nSelect Task (1 - 6)\n\n";
	cin >> a;

	switch (a) {
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;
	case 3:
		task3();
		break;
	case 4:
		task4();
		break;
	case 5:
		task5();
		break;
	case 6:
		task6();
		break;
}	

	main();

	return 0;
}
