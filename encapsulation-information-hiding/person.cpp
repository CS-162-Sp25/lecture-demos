#include <iostream>

#include "person.hpp"

void person::print() const {
	// The this keyword is a pointer to the structure / object
	// on which this member function is currently being called
	std::cout << (*this).name << " is " << this->age << " years old." << std::endl;
}

// Terminology: These are called "setters", or "mutators"

void person::set_name(const std::string& name) {
	this->name = name;
}

void person::set_age(int age) {
	this->age = age;
}

std::string person::get_name() const {
	return this->name;
}
