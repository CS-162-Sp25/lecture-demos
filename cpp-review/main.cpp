#include <iostream>

// using std::cout;

// using namespace std; // Namespace dumping

// main is the "entrypoint" of a c++ program
int main() {
	// This is where the program starts
	// cout stands for "console output"
	//
	// << is an operator. The "stream insertion operator"
	std::cout << "Hello, World!" << std::endl;

	// Expressions and operators
	// +
	// -,
	// * (multiplication)
	// / (division)
	// % (modulo, remainder after division)
	// (9 % 4) == 0
	std::cout << (1 + 1) << std::endl; // Prints 2

	// Truncation means "rounding down"
	std::cout << (99 / 100.0) << std::endl; // Prints 0.99

	// Variable declaration:
	// <type> <name>;
	int my_variable; // Can't start with a digit. Can contain
	// #s, letters, and _'s
	
	// In C++, a variable's type is fixed
	
	// Some primitive types:
	// int: integer, whole number
	// double: double-precision floating point number
	// float: floating point number
	// bool: boolean (true/valse)
	// char: character
}
