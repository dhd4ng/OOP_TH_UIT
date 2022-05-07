#pragma once
#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
private:
	int MSSV;
	string name;
	int DTB;
public:
	static int soSV;
	SinhVien();
	SinhVien(int MSSV, string name, int DTB);
	~SinhVien();

	int getMSSV();
	string getName();
	int getDTB();

	void XuatSV();

	void setMSSV(int mssv);
	void setName(string name);
	void setDTB(int DTB);
};

