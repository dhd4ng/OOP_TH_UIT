#pragma once
#include "Nguoi.h"
class CongNhan:public Nguoi
{
private:
	string congTy;
public:
	CongNhan();
	CongNhan(string ten, string ngaySinh, string congTy);

	void setCongTy(string cty);
	string getCongTy();
	void getInfo();
	void display();

	~CongNhan();
};

