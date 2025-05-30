#include <iostream>

// vector<directory> get_directories_within(directory d);
// vector<file> get_files_within(directory d);
// remove_file(file f);
// remove_empty_directory(directory d);

void remove_directory(directory d) {
	vector<file> files_in_d = get_files_within(d);
	for (int i = 0; i < files_in_d.size(); i++) {
		remove_file(files_in_d.at(i));
	}

	vector<directory> directories_in_d = get_directories_within(d);
	for (int i = 0; i < directories_in_d.size(); i++) {
		// This is called recursion!
		// Recursion is, loosely, when a function calls itself.
		remove_directory(directories_in_d.at(i));
	}


	remove_empty_directory(d);
}

int main() {
	directory d = get_working_directory();
	remove_directory(d);
}
