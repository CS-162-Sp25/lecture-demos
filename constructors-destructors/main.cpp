#include <iostream>

// What is the purpose of a constructor?
// A: To initialize / set up an object. Called automatically when object is declared.

// What is the purpose of a destructor?
// A: To "tear down" an object

// pet_owner.hpp
class pet_owner {
private:
	int num_pets;
	std::string* pet_names;
public:
	void print() const;
	pet_owner(); // Default constructor: Constructor with no parameters
	pet_owner(int num_pets); // Nondefault constructor: Constructor with parameters
};

// pet_owner.cpp
void pet_owner::print() const {
	for (int i = 0; i < this->num_pets; i++) {
		std::cout << this->pet_names[i] << std::endl;
	}
}

// Default constructor
pet_owner::pet_owner() {
	this->pet_names = nullptr;
	this->num_pets = 0;
	std::cout << "Default Constructor!" << std::endl;
}

pet_owner::pet_owner(int num_pets) : num_pets(num_pets), pet_names(new std::string[this->num_pets]) {
	std::cout << "Nondefault Constructor!" << std::endl;
}


// main.cpp
int main() {
	pet_owner p; // This line calls the DEFAULT constructor
	// Initialize, or "set up" p, including ALL of its member variables
	p.print();

	pet_owner p2(5);
}
