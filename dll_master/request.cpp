#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;


// ��������� �������

void helloWorld() {
    cout << "Hello World!";
}


int total(int a, int b) {
    return a + b;
}

string echo(string a) {

    return a;
}


// �������������� �������

extern "C" __declspec(dllexport) int helloWorldExport()
{
    helloWorld();

    return 0;
}

extern "C" __declspec(dllexport) int totalExport(int a, int b)
{

    return total(a, b);
}

extern "C" __declspec(dllexport) int echoExport(string a)
{
    string ans = echo(a);

    cout << ans;

    return  0;
}





