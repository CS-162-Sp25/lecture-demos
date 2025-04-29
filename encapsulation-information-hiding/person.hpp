#ifndef PERSON_HPP
#define PERSON_HPP

// Classes: A structure type, except members are private by default
// Objects: An instance of a class

class person {
private: // Access modifier
	// These members are private to this structure type.
	// These members can only be accessed by "member functions"
	// 		of this structure type.
	int age;
	std::string name;
public:
	/*
	 * Function: print
	 * Parameters: ...
	 */
	void print() const;

	
	// void init(int age, const std::string& name);
	void set_age(int age);
	void set_name(const std::string& name);

	std::string get_name() const;
};

#endif
