#include <iostream>
#include <thread>
#include <mutex>

std::mutex print_mutex;

void add(int a, int b) {
    print_mutex.lock();
    std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
    print_mutex.unlock();
}

void multiply(int a, int b) {
    print_mutex.lock();
    std::cout << "The product of " << a << " and " << b << " is " << a * b << std::endl;
    print_mutex.unlock();
}

void subtract(int a, int b) {
    print_mutex.lock();
    std::cout << "The difference between " << a << " and " << b << " is " << a - b << std::endl;
    print_mutex.unlock();
}

void divide(int a, int b) {
    print_mutex.lock();
    std::cout << "The quotient of " << a << " and " << b << " is " << a / b << std::endl;
    print_mutex.unlock();
}

int threadcalc() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::thread add_thread(add, num1, num2);
    std::thread multiply_thread(multiply, num1, num2);
    std::thread subtract_thread(subtract, num1, num2);
    std::thread divide_thread(divide, num1, num2);

    add_thread.join();
    multiply_thread.join();
    subtract_thread.join();
    divide_thread.join();

    return 0;
}