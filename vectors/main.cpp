#include <iostream>
#include <vector>

int main() {
	std::vector<double> v;
	
	// Append
	v.push_back(3.1415);
	v.push_back(9.81);

	std::cout << "v's size is" << v.size() << std::endl;
	
	for (int i = 0; i < v.size(); i++) {
		// std::cout << v[i] << std::endl;
		std::cout << v.at(i) << std::endl; // Performs bounds-checking
	}

	
}
