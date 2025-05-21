#include <iostream>
#include <vector>

// Standard template library (STL).

int main() {
	// Inits vector to have 10 (garbage) doubles
	// std::vector<double> v(10);
	
	// std::vector<double> v(10, 3.141592);
	
	std::vector<double> v;

	// Append
	v.push_back(3.1415);
	v.push_back(9.81);

	std::vector<double> v2 = v;

	std::cout << "v's size is" << v.size() << std::endl;
	
	for (int i = 0; i < v.size(); i++) {
		// std::cout << v[i] << std::endl;
		// v[i] = 100;
		std::cout << v.at(i) << std::endl; // Performs bounds-checking
		// v.at(i) = 100;
	}

	// Iterator: An object that sort of represents a pointer that points
	// to a certain element within a container. The point of an iterator
	// is to allow you to traverse a container.
	
	// Get iterator that points to element at index 0
	std::vector<double>::iterator my_itr = v.begin();
	// Get iterator that points to element at index 1
	std::vector<double>::iterator my_itr_2 = my_itr + 1;
	
	// Erase element at index 1
	v.erase(my_itr_2);

	for (int i = 0; i < v.size(); i++) {
		// std::cout << v[i] << std::endl;
		// v[i] = 100;
		std::cout << v.at(i) << std::endl; // Performs bounds-checking
		// v.at(i) = 100;
	}
	
	// {9.81, 3.1415}
	std::vector<double>::iterator idx_0_itr = v.begin();
	v.insert(idx_0_itr, 9.81);

	for (int i = 0; i < v.size(); i++) {
		// std::cout << v[i] << std::endl;
		// v[i] = 100;
		std::cout << v.at(i) << std::endl; // Performs bounds-checking
		// v.at(i) = 100;
	}
}
