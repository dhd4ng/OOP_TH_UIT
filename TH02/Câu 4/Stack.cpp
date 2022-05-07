#include "Stack.h"

Stack::Stack(int size)
{
	list = new int[size];
	length = size;
	top = -1;
}

Stack::~Stack()
{
	delete[] list;
}

void Stack::push(int i)
{
	list[++top] = i;
}

int Stack::pop()
{
	if (empty()) {
		cout << "Stack is empty" << endl;
		exit;
	}
	int data = peek();
	top--;
	return data;
}

int Stack::peek()
{
	if (!empty()) return list[top];
	else exit;
}

int Stack::size() {
	return top + 1;
}

bool Stack::full()
{
	return (size() == length);
}

bool Stack::empty()
{
	return (size() == 0);
}
