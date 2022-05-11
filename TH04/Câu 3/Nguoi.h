#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Nguoi
{
protected:
	string ten;
	string ngaySinh;
public:
	Nguoi();
	Nguoi(string ten, string ngaySinh);

	virtual void getInfo() = 0;
	virtual void display() = 0;
	string getTen();
	string getNgaySinh();
	void setTen(string ten);
	void setNgaySinh(string ngaySinh);

	~Nguoi();
};

