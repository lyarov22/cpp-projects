#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int task6()
{   
    cout << "Task 6\n\n";
    float S;

    int x;
    cin >> x;
    int s = 3;

    S = sin(x);

    for (int i = 0; i < x; ++i) {

        S += (sin(s * x) / s);
        s += 2;

    }
 



    cout << S << endl;

    return 0;
}