#include <iostream>

// using std::cout;

// using namespace std; // Namespace dumping

void populate_array(bool my_array[], int size) {
	for (int i = 0; i < size; i++) {
		my_array[i] = true;
	}
}

int sum(int a, int b) {
	return a + b;
}

double prompt_for_double() {
	double number;
	do {
		std::cout << "Enter a number between 1 and 10: ";
		std::cin >> number;
	} while(number < 1 || number > 10);

	return number;

	std::cout << "Hi" << std::endl; // Dead code
}

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

	// Create a variable
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
	
	// Assignment operator
	my_variable = 3.99; // This is legal

	std::cout << my_variable << std::endl; // What does this print? 3
	
	double pi = 3.141592;

	float gravity;

	// Undefined behavior
	std::cout << gravity << std::endl; // Prints some undefined value

	gravity = 9.81;

	std::cout << gravity << std::endl; // Prints 9.81

	// std::cin
	int favorite_number;
	std::cout << "Enter your favorite number: ";
	// >> is the stream extraction operator
	std::cin >> favorite_number;

	std::cout << "You said that your favorite number is " <<
		favorite_number << std::endl;
	
	// Relational operators are:
	// == (equal to)
	// < (less than)
	// >
	// <=
	// >=
	// != (not equal to)
	
	// Logical operators:
	// && (logical AND)
	// || (logical OR)
	// !  (logical NOT)

	if (favorite_number >= 5 && favorite_number <= 10) {
		
	}

	// if statements
	if (5 > favorite_number) {
		std::cout << "Your favorite number is less than 5!" <<
			std::endl;
	} else if (favorite_number > 10) {
		std::cout << "Your favorite number is greater than 10!" <<
			std::endl;
	} else {
		std::cout << "Your favorite number is within [5, 10]" <<
			std::endl;
	}


	// While loops
	// Do-while loops
	// For loops

	int i = 0;
	while (i < 10) {
		std::cout << i << std::endl;
		i = i + 1;
		// ++i
		// i++
	}
	// In the end, i is 10
	
	/*
	do {
		// Some body of code
	} while (some condition);
	*/
	

	// ++i
	// equivalent to: i = i + 1;
	for (int i = 0; i < 5; ++i) {
		std::cout << "Hello, World!" << std::endl;
	}

	// Functions
	double number = prompt_for_double();
	std::cout << number << std::endl;

	int peanut_butter = 5;
	int jelly = 12;
	std::cout << sum(peanut_butter, jelly) << std::endl;

	// TODO Arrays
	// An array is a homogeneous fixed-size sequence of values
	bool array_of_booleans[12];
	
	array_of_booleans[11] = true;
	

	// TODO Arrays in functions
	populate_array(array_of_booleans, 12);
	
}
