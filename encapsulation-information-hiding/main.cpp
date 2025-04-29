#include <fstream>

#include "person.hpp"

// Coupling: Needing to change multiple components of code together in order to
// 		facilitate a change in a feature
// Encapsulation: Bundling of data with the behavior that operates on that data

// Dependencies: When one component of code "uses" another component of code,
// 	or "relies on" another component of code

// Information-hiding: The hiding of information. The isolation of information
// within a component of code, or a "module"


void some_function() {
	std::ifstream the_file;
	the_file.open("data.txt");
	std::string name;
	int age;
	the_file >> name;
	the_file >> age;

	person p;
	p.set_name(name);
	p.set_age(age);
	p.print();
}

int main() {
	person jane;
	jane.set_name("Jane");
	jane.set_age(24);
	
	jane.print();

	some_function();

	if (jane.get_name() == "Jane") {
		// jane.name is Jane!
	}
}
