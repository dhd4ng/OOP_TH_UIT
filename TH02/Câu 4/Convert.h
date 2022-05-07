#include "Stack.h"

class Convert {
private:
	int data;
	Stack a;
public:
	Convert();
	~Convert();

	void Hex(int);
	void Oct(int);
	void Bin(int);
};