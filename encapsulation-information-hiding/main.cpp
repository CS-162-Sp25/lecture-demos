#include <fstream>
#include <iostream>

#include "person.hpp"

// Definitions...
// Coupling: Changing one line of code requires changing another line of code
// Code that has a high degree of coupling is hard to maintain.

// Coupling is inevitable. Coupling occurs AT LEAST anywhere there are
// dependencies.

// Dependency: Is when one component of code "uses" another component of code

// Encapsulation: Bundling data and behavior that operates on that data

// Interface: The part of a component of code that describes the "what" of
// 	that component
// Contract: 
// Implementation: The part of a component of code that describes the "how"
// 	of that component

// SRP: Every component of code should have a single responsibility
// SOLID

// Refactoring: Change the structure of the code without changing its semantics
// Extraction: Separate some functionality into its own component

void some_function() {
	std::ifstream person_file("person.txt");
	if (person_file.fail()) {
		std::cout << "Failed to open person.txt!" << std::endl;
		return;
	}

	person p;
	person_file >> p.name;
	person_file >> p.age;

	print_person(p);
}

int main() {
	person jane;
	jane.name = "Jane";
	jane.age = 32;

	print_person(jane);

	some_function();
}
