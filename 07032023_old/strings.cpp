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
	cout << "�������� ��������:" << endl;
}

string menu() {
	clearConsole();
	choice();
	return "1 - ������� ���������� \n2 - ������������� \n3 - �������������� �������\n";
}

string menuBasicMath() {
	clearConsole();
	choice();
	return "1 - �������� \n2 - ��������� \n3 - ��������� \n4 - �������\n";
}

string menuFullMath() {
	clearConsole();
	choice();
	return "1 - ����� \n2 - ������� \n3 - ������� \n4 - ���������\n";
}

string menuMathFunc() {
	clearConsole();
	choice();
	return "1 - �������� ��������������\n2 - ������� ��������������\n3 - ���������\n";
}

