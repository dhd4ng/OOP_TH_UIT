#pragma once
#include <iostream>
using namespace std;
class Stack
{
private:
	int* list;
	int top;
	int length;

public:
	Stack(int size = 10);
	~Stack();

	void push(int i);
	int pop();
	int size();

	int peek();
	bool full();
	bool empty();
};

