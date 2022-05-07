#include "String.h"

int main() {
	String test; 
	cout << "Enter string: ";
	cin >> test;
	cout << "The length of the string: " << test.getStr() << endl;
	test.inverse();
	cout << "String after inverse: " << test << endl;
	String test2;
	cout << "Enter string: ";
	cin >> test2;
	cout << test + test2; 
}