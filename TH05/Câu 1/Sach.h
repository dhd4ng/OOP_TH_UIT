#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sach
{
protected:
	string ten;
	int soTrang;
public:
	Sach();

	virtual void getInfo() = 0;
	virtual void display() = 0;

	int getSoTrang();
	void setSoTrang(int soTrang);
	string getTen();
	void setTen(string ten);

	~Sach();
};

