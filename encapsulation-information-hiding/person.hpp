#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

struct person {
	std::string name;
	int age;
};

/*
 * Block comments explain INTERFACE
 * Function: print_person
 * Parameters: 
 *
 */
void print_person(const person& p);


#endif
