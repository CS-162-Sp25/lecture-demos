#include <iostream>

// fib(n) = fib(n - 1) + fib(n - 2)
// fib(0) = 0
// fib(1) = 1
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

int fib(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}

	return fib(n - 1) + fib(n - 2);
}

int main() {
	std::cout << fib(9) << std::endl;
}
