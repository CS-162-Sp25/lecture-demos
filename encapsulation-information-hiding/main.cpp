#include <fstream>
#include <iostream>

#include "person.hpp"

void some_function() {
	std::ifstream person_file("person.txt");
	person p;
	person_file >> p.name;
	person_file >> p.age;

	std::cout << p.name << " is " << p.age << " years old." << std::endl;
}

int main() {
	person jane;
	jane.name = "Jane";
	jane.age = 32;

	std::cout << jane.name << " is " << jane.age << " years old." << std::endl;

	some_function();
}
