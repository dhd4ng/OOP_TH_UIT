#include "Queue.h"
#include <iostream>
using namespace std;
int main() {
	Queue test(5);
	test.Enqueue(1);
	test.Enqueue(2);
	test.Enqueue(3);

	cout << "The front element is: " << test.Front() << endl;
	cout << "The last element is: " << test.Back() << endl;
	test.Dequeue();

	test.Enqueue(4);

	cout << "The queue size is: " << test.Size() << endl;

	test.Dequeue();
	test.Dequeue();
	test.Dequeue();

	if(test.Empty()) cout << "The queue is empty\n";
	else cout << "The queue is not empty\n";
	
}