#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int randcalc()
{
    srand(time(NULL));

    vector<int> nums;

    for (int i = 0; i < 5; i++) {
        nums.push_back(rand() % 10 + 1);
    }

    multiset<char> ops;

    ops.insert('+');
    ops.insert('-');
    ops.insert('*');
    ops.insert('/');

    cout << "Numbers: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Operators: ";
    for (multiset<char>::iterator it = ops.begin(); it != ops.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    int index = rand() % ops.size();
    multiset<char>::iterator it = ops.begin();
    advance(it, index);
    char op = *it;

    cout << "Operator: " << op << endl;

    switch (op) {
    case '+':
        cout << "Result: " << nums[0] + nums[1] << endl;
        break;
    case '-':
        cout << "Result: " << nums[0] - nums[1] << endl;
        break;
    case '*':
        cout << "Result: " << nums[0] * nums[1] << endl;
        break;
    case '/':
        cout << "Result: " << nums[0] / nums[1] << endl;
        break;
    }

    return 0;
}