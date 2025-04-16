#include <iostream>

// This is the global scope

// int x; // This is a global variable. This is a bad idea.

/*
void change_me(int* p) {
	*p = 10;
}
*/

void change_me(int& r) {
	r = 10;
}

int main() {
	int x = 20;

	// Pointers: A pointer is a variable that stores the memory
	// address of another variable
	//
	// Memory address: A number that represents the location of a byte
	// of memory
	
	// & before an existing variable is the "address-of" operator
	std::cout << &x << std::endl; // Prints the memory address of x

	// * in the type of a declaration of a new variable, it means
	// "this variable is a pointer"
	int* y = &x;

	// y "points to" x
	
	// * before the name of an EXISTING variable, this is called
	// "indirection operator". "dereference operator"
	std::cout << *y << std::endl; // Prints 20

	change_me(x);
	std::cout << x << std::endl; // Prints 10

	// A reference is basically just a pointer with slightly different
	// syntax
	// & in the type of a declaration of a new variable, it just means
	// "this variable is a reference"
	// 1. References must be initialized as they're declared
	// 2. The address-of operator on the right side of the = is
	// 	implied when initializing the reference
	int& r = x;

	// 3. After a reference has been declared (and initialized),
	// 	any usage of the reference automatically dereferences
	// 	the reference
	std::cout << r << std::endl; // This prints x, which is 10

	std::cout << &r << std::endl; // This prints the memory address of x

	// Another viewpoint: References are "nicknames" for other variables
	
	r = 15; // Sets x = 15
	std::cout << x << std::endl; // Prints 15
	std::cout << r << std::endl; // Prints 15

	int z = -1;
	*y = -10; // This changes x to -10
	y = &z; // Now, y points to z
	*y = -10; // This changes z to -10

	/*
	char rack[5] {'_', '_', '_', '_', '_'};
	std::cout << rack[5]; // Buffer overread
	*/

	// References can never be changed
	r = z; // This sets x = z

	// Pointers can point to "nothing"
	y = nullptr;
	if (y != nullptr) {
		std::cout << *y << std::endl;
	}

	// Dereference a null pointer. Segmentation fault.
	// *y;
	
	// Undefined behavior. Usually invalid memory access

	// pointer to beginning of array
	char rack[5] {'_', '_', '_', '_', '_'};
	std::cout << rack << std::endl; // Prints memory address of rack[0]
	// char* my_ptr = &(rack[0]);
	char* my_ptr = rack;
	std::cout << *my_ptr << std::endl; // Prints _
	std::cout << my_ptr[1] << std::endl; // Prints _
}
