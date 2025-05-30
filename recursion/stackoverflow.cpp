#include <iostream>

// Every function call gets its own stack frame. That's where the function
// call's local storage exists

void print_hello(int n) {
	// Every recursive function needs a base case.
	// A base case is a situation in which the function
	// does NOT recurse.
	if (n <= 0) {
		return;
	}

	std::cout << "Hello" << std::endl;

	// Infinite recursion, results in a stack overflow
	print_hello(n-1);
}

int main() {
	print_hello(10);
}
