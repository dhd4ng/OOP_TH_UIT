#pragma once
#include "Nguoi.h"
class NgheSi : public Nguoi
{
private:
	string ngheDanh;
public:
	NgheSi();
	NgheSi(string ten, string ngaySinh, string ngheDanh);

	void setNgheDanh(string ngheDanh);
	string getNgheDanh();
	void getInfo();
	void display();

	~NgheSi();
};

