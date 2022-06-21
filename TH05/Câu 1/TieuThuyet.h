#pragma once
#include "Sach.h"
class TieuThuyet : public Sach
{
private:
	string theLoai;
public:
	TieuThuyet();

	string getTheLoai();
	void setTheLoai(string theLoai);
	void getInfo();
	void display();

	~TieuThuyet();
};

