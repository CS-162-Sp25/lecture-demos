#include <iostream>

int main() {
	// 1. The size must be a compile-time constant
	// 	(number that's known at compile time)
	// 2. It can't be resized
	int size = 3;
	int* my_numbers = new int[size]; // Automatic array. Automatic storage duration.
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
		// int my_new_numbers[size + 1];
		int* my_new_numbers = new int[size + 1];
		// Copy the elements from the old array to the new array
		for (int i = 0; i < size; i++) {
			my_new_numbers[i] = array_ptr[i];
		}
		// Add your new element to the "empty" slot at the end
		my_new_numbers[size] = 20;
		delete [] array_ptr; // Delete the OLD array

		// Update the pointer to point to the new array
		array_ptr = my_new_numbers;

		// Update size
		size++;

		// delete [] my_new_numbers; // DON'T DO THIS
	}

	// What's wrong with this? Nothing.
	std::cout << array_ptr[3] << std::endl;

	// Write delete, then write [], then supply a pointer that points
	// to the dynamic array that you want to delete
	delete [] array_ptr;
	// delete [] array_ptr; // This is called a "double free"

	/*
	bool* my_cool_boolean = new bool;
	delete my_cool_boolean;
	*/

	// When to delete a dynamic array:
	// 1. You must do it
	// 2. You must not do it before you're done with it
	// 3. You must not do it twice
	
	// When you don't delete dynamic memory, that mistake is called
	// a memory leak.
	
	/*
	while (the player wants to keep playing the game) {
		char* my_array = new char[10];
		play_game(my_array);
		delete [] my_array;
	}
	*/
}
