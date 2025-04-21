#include <iostream>

struct stats {
	double batting_average;
	// Maybe some other baseball player statistics
};

// Composition: Structures within structures
// Composition denotes a "has-a" relationship
struct baseball_player {
	int age;
	stats my_stats;
};

int main() {
	baseball_player p;
	p.age = 25;

	/*
	stats s;
	s.batting_average = 0.6;

	p.my_stats = s;
	*/

	p.my_stats.batting_average = 0.6;

	baseball_player sally {23, {0.7}};
}
