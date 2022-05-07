#include "GiangVien.h"

int GiangVien::soGV = 0;
GiangVien::GiangVien()
{
	soGV++;
}

GiangVien::GiangVien(int msgv, string name, string major)
{
	this->MSGV = msgv;
	this->name = name;
	this->major = major;
}

GiangVien::~GiangVien()
{
}

int GiangVien::getMSGV()
{
	return this->MSGV;
}

string GiangVien::getName()
{
	return this->name;
}

string GiangVien::getMajor()
{
	return this->major;
}

void GiangVien::XuatGV()
{
		cout << "Ma so giang vien: " << MSGV << endl;
		cout << "Ten giang vien: " << name << endl;
		cout << "Chuyen nganh: " << major << endl;
}

void GiangVien::setMSGV(int msgv)
{
	this->MSGV = msgv;
}

void GiangVien::setName(string name)
{
	this->name = name;
}

void GiangVien::setMajor(string major)
{
	this->major = major;
}
