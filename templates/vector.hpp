#ifndef VECTOR_HPP
#define VECTOR_HPP

template<typename T>
class vector {
private:
	T* data = nullptr;
	int size = 0;
public:
	void push_back(T value) {
		T* new_data = new T[this->size + 1];
		for (int i = 0; i < this->size; i++) {
			new_data[i] = this->data[i];
		}
		delete [] this->data;
		new_data[this->size] = value;
		this->data = new_data;
		this->size++;
	}
};

/*
template<typename T>
void vector<T>::push_back(T value) {
	T* new_data = new T[this->size + 1];
	for (int i = 0; i < this->size; i++) {
		new_data[i] = this->data[i];
	}
	delete [] this->data;
	new_data[this->size] = value;
	this->data = new_data;
	this->size++;
}
*/

#endif
