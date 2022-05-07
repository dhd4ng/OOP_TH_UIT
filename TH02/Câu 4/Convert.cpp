#include "Stack.h"

void Hex(int n)
{
	Stack a;
	int temp;
	while (n!= 0) {
		temp = n%16;
		a.push(temp);
		n /= 16;
	}
	cout << "Hexadecimal : ";
	while (a.empty() == 0) {
		int s = a.pop();
		switch (s) {
		case 10: {cout << "A"; break; }
		case 11: {cout << "B"; break; }
		case 12: {cout << "C"; break; }
		case 13: {cout << "D"; break; }
		case 14: {cout << "E"; break; }
		case 15: {cout << "F"; break; }
		default: {cout << s; break; }
		}
	}
	cout << endl;
}

void Oct(int n)
{
	Stack a;
	int temp;
	while (n != 0) {
		temp = n % 8;
		a.push(temp);
		n /= 8;
	}
	cout << "Octal : ";
	while (a.empty() == 0)
		cout << a.pop();
	cout << endl;
}

void Bin(int n)
{
	Stack a;
	int temp;
	while (n != 0) {
		temp = n % 2;
		a.push(temp);
		n /= 2;
	}
	cout << "Binary : ";
	while (a.empty() == 0)
		cout << a.pop();
	cout << endl;
}

int main() {
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	Hex(n);
	Oct(n);
	Bin(n);
	return 0;
}