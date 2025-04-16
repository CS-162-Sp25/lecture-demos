#include <iostream>

int main() {
	// 1. The size must be a compile-time constant
	// 	(number that's known at compile time)
	// 2. It can't be resized
	constexpr int size = 3;
	int my_numbers[size]; // Automatic array. Automatic storage duration.
	// Automatic storage duration: The lifetime (i.e., storage duration)
	// of the variable is decided "automatically" by your computer,
	// according to scopes.
	int* array_ptr = my_numbers;
	bool my_bool = false;
	// my_numbers[3] = 100; // Buffer overflow. Undefined behavior.
	
	array_ptr[0] = 5;
	array_ptr[1] = 10;
	array_ptr[2] = 15;

	bool has_another_number;
	std::cout << "Would you like to enter a fourth element into the array?: ";
	std::cin >> has_another_number;
	if (has_another_number) {
		// Trick: We can't resize arrays. But we can make new ones.
		// Dynamic array. An array with "dynamic storage duration".
		int* my_new_numbers = new int[size + 1];
		// Copy the elements from the old array to the new array
		for (int i = 0; i < 3; i++) {
			my_new_numbers[i] = array_ptr[i];
		}
		// Add your new element to the "empty" slot at the end
		my_new_numbers[3] = 20;
		array_ptr = my_new_numbers;
	}

	// array_ptr is called a "dangling pointer". A pointer that points
	// to deleted memory.

	// What's wrong with this?
	std::cout << array_ptr[3] << std::endl; // "Use after free" error
	// Undefined behavior

	
}
