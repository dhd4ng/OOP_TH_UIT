#include "SinhVien.h"

int SinhVien::soSV = 0;
SinhVien::SinhVien()
{
	soSV++;
}

SinhVien::SinhVien(int MSSV, string name, int DTB)
{
	this->MSSV = MSSV;
	this->name = name;
	this->DTB = DTB;
}

SinhVien::~SinhVien()
{
}

int SinhVien::getMSSV()
{
	return this->MSSV;
}

string SinhVien::getName()
{
	return this->name;
}

int SinhVien::getDTB()
{
	return this->DTB;
}

void SinhVien::XuatSV()
{
	cout << "Ma so sinh vien: " << MSSV << endl;
	cout << "Ho va ten: " << name << endl;
	cout << "Diem trung binh: " << DTB << endl;
}

void SinhVien::setMSSV(int mssv)
{
	this->MSSV = mssv;
}

void SinhVien::setName(string name)
{
	this->name = name;
}

void SinhVien::setDTB(int DTB)
{
	this->DTB = DTB;
}
