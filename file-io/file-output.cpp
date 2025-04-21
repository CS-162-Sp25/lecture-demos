#include <iostream>
#include <fstream>

// ifstreams and ofstreams MUST be passed by pointer or reference,
// and they can't be returned. So create them early and pass them around by
// reference.
void function(std::ifstream& my_cool_file) {
	
}

int main() {
	// Standard I/O: Standard input / output
	// std::cout << "Hello" << std::endl;
	// std::cout is a representation of the program's standard output
	// stream
	// int x;
	// std::cin >> x;

	// More generally, std::cout is an "output stream". std::cin is an
	// "input stream".
	
	// Suppose you want to pipe data to a file, or read data from a file.
	
	// 1. Create an appropriate file input stream or file output stream
	// 2. "Hook up" that file stream to the appropriate file
	// 3. Use that file output stream just like you would use std::cout
	// 	(or use that file input stream just like you would use std::cin)

	std::ofstream my_cool_data_file;
	// Important: Relative paths are relative to your program's working
	// directory, meaning the working directory at the time that you
	// execute the program
	
	// By default, ofstreams open in "truncate mode". By default, when
	// you open a file with an ofstream, it will erase the contents of
	// that file if it already exists. Overwrites the file.
	// std::ofstream::app instead opens it in append mode.
	my_cool_data_file.open("output.txt", std::ofstream::app); // open() is a member function

	my_cool_data_file << "Hello, World!" << std::endl;
}
