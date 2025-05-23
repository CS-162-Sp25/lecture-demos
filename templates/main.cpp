#include <iostream>

#include "vector.hpp"

int main() {
	// Template instantiation happens at compile time in C++.
	// 	Template arguments MUST be compile-time constants
	vector<int> my_numbers;
	my_numbers.push_back(100);
}
