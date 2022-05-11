#pragma once
#include "Nguoi.h"
class SinhVien : public Nguoi
{
private:
	int MSSV;
public:
	SinhVien();
	SinhVien(string ten, string ngaySinh, int MSSV);

	int getMSSV();
	void setMSSV(int MSSV);
	void getInfo();
	void display();

	~SinhVien();
};

