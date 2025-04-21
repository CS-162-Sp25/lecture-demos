#include <iostream>
#include <fstream>

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

	std::ifstream my_cool_data_file;
	// Important: Relative paths are relative to your program's working
	// directory, meaning the working directory at the time that you
	// execute the program
	my_cool_data_file.open("data2.txt"); // open() is a member function

	// If the file doesn't exist, my_cool_data_file's error bit will be
	// set to true.
	if (my_cool_data_file.fail()) {
		std::cout << "Failed to open the file!" << std::endl;
		return 1;
	}
	

	int number_1;
	my_cool_data_file >> number_1; // >>  reads one "token" from the file
	// tokens are "delimited", or separated, by whitespace

	std::string word;
	my_cool_data_file >> word;

	// std::getline(my_cool_data_file, sentence)

	int number_2;
	my_cool_data_file >> number_2;

	std::cout << "The first number is: " << number_1 << std::endl;
	std::cout << "The word is: " << word << std::endl;
	std::cout << "The second number is: " << number_2 << std::endl;
}
