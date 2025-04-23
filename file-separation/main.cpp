// This is a preprocessing directive
#include <iostream>

// File separation: About separating your code into multiple files

// A valid C++ program:
// 1. In a given .cpp file, each function that is used must be declared
// 	at least once in THAT .cpp file before it is used.
// 2. Across an entire C++ PROGRAM, every function that is used must be
// 	defined exactly once
// 3. In a given .cpp file, each structure type that is used must be
// 	DEFINED EXACTLY ONCE in that .cpp file before it is used

// g++ does three things:
// 	1. Preprocesses each .cpp file
// 	2. Compiles each preprocessed .cpp file into object code
// 	3. Links all of the object code together

#include "a.hpp"
#include "b.hpp"

int main() {
	baseball_player p;
	p.age = 27;
	print_baseball_player(p);
}
