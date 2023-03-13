#include <stdexcept>

float add(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}

float multiply(float a, float b) {
	return a * b;
}

float divide(float a, float b) {
	if (b == 0) {
		throw std::runtime_error("division by zero");
	}
	return a / b;
}