#pragma once
#include "Sach.h"
class SachGiaoKhoa : public Sach
{
private:
	string monHoc;
public:
	SachGiaoKhoa();

	string getMonHoc();
	void setMonHoc(string monHoc);
	void getInfo();
	void display();

	~SachGiaoKhoa();
};

