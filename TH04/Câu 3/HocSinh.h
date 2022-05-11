#pragma once
#include "Nguoi.h"
class HocSinh : public Nguoi
{
private:
	int MSHS;
public:
	HocSinh();
	HocSinh(string ten, string ngaySinh, int MSHS);

	void setMSHS(int MSHS);
	int getMSHS();
	void getInfo();
	void display();

	~HocSinh();
};

