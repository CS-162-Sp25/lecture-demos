// The STL offers:
// 1. Data structures / abstract data types
// 2. Iterators
// 3. Algorithms that operate on those other things (sorting and searching)

#include <vector>
#include <set>
#include <map>

int main() {
	// Sets: Are like vectors, except 1) they aren't positional /
	// sequential; and 2) elements in a set must be unique.
	
	// Sequential: The elements in the container are arranged in a sequence
	// 	whose order is defined by the user
	
	/*
	std::set<int> my_set;
	my_set.insert(100);
	my_set.insert(100); // I can't insert the same element twice!
	if (my_set.contains(100)) {
		// Sets are very good at this!
	}
	*/

	/*
	std::map<std::string, double> my_map;
	my_map.insert("Alex", 3.14);
	my_map.insert("Tyler", 9.81);
	double value = my_map.find("Alex"); // Maps are very good at this!
	*/

	// Maps are "associative" containers. Vectors are "sequential", or
	// "positional". Sets are "associative".
}
