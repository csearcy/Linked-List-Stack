//
//  Stack.cpp
//  Linked List: Stack
//
//  Created by Chris Searcy on 6/21/15.
//  Copyright (c) 2015 Chris Searcy. All rights reserved.
//

#include "Stack.h"


Stack::~Stack() {
	while (head) {
		Node *next = head->getNext();
		delete head;
		head = next;
	}
}

void Stack::push(int data) {
	
	Node* node = new Node(head, &data);
	head = node;
	if (head->getNext() == NULL )
		tail = head;
	
}

int Stack::pop() {
	
	Node *popNode = head;
	int data;
	
	// Node *temp = head->getNext();
	if(head == NULL)
		throw; //StackError(E_EMPTY);
	
	data = head->value();
	head = head->getNext();
	delete popNode;
	return data;
}

void Stack::printStack() {
	Node *current = head;
	while (current != tail) {
		
		cout << current->value();
		if (current != tail) {
			cout << ", ";
		}
		
		current = current->getNext();
	}
	
	cout << current->value() << endl;
}