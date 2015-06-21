//
//  main.cpp
//  Linked List: Stack
//
//  Created by Chris Searcy on 6/21/15.
//  Copyright (c) 2015 Chris Searcy. All rights reserved.
//

#include <iostream>
#include "Stack.h"

int main(int argc, const char * argv[]) {
	

	Stack *myStack = new Stack();
	

	myStack->push(9);
	myStack->printStack();
	myStack->push(8);
	myStack->printStack();
	myStack->push(7);
	myStack->printStack();
	myStack->push(6);
	myStack->printStack();
	myStack->push(5);
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->push(5);
	myStack->printStack();
	myStack->push(4);
	myStack->printStack();
	myStack->push(3);
	myStack->printStack();
	myStack->push(2);
	myStack->printStack();
	myStack->push(1);
	myStack->printStack();
	myStack->push(0);
	myStack->printStack();
	/*
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();
	myStack->pop();
	myStack->printStack();	
	*/
}
