//
//  Stack.h
//  Linked List: Stack
//
//  Created by Chris Searcy on 6/21/15.
//  Copyright (c) 2015 Chris Searcy. All rights reserved.
//

#ifndef __Linked_List__Stack__Stack__
#define __Linked_List__Stack__Stack__

#include <stdio.h>
#include <iostream>

using namespace std;
//#include "Element.h"

class Stack {
	
	
public:
	Stack() : head(NULL), tail(NULL) {};
	~Stack();
	void push(int data);
	int pop();
	void printStack();
	
	protected:
	class Node {
	public:
		Node(Node *n, int *data) : next(n), data(*data) {}
		Node *getNext() const { return next; }
		int value() const { return data; }
	private:
		Node* next;
		int data;
	};
	
	Node *head;
	Node *tail;
	
};


#endif /* defined(__Linked_List__Stack__Stack__) */
