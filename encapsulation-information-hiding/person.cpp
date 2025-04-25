#include <iostream>

#include "person.hpp"

// Implementation
void print_person(const person& p) {
	std::cout << p.name << ": " << p.age << " y/o" << std::endl;
}
