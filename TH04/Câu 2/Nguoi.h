#pragma once
#include <iostream>
#include <string>
using namespace std;

class Nguoi
{
protected:
	string ten;
	string ngaySinh;
public:
	Nguoi();
	Nguoi(string ten, string ngaySinh);

	void getInfo();
	void display();
	string getTen();
	string getNgaySinh();
	void setTen(string ten);
	void setNgaySinh(string ngaySinh);

	~Nguoi();
};

