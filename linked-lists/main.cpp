#include <iostream>

struct node {
	int value;
	node* next = nullptr;
};

void push_back(node* head, int value) {
	node* new_tail = new node;
	new_tail->value = value;
	
	node* itr = head;
	while (itr->next != nullptr) {
		itr = itr->next;
	}
	
	itr->next = new_tail;
}

int main() {
	node* head = new node;
	head->value = 10;
}
