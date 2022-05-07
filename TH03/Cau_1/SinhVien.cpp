#include "SinhVien.h"

int SinhVien::soSV = 0;

SinhVien::SinhVien()
{
	soSV++;
}

SinhVien::SinhVien(int MSSV, string name, string address, string phone, char hocLuc)
{
	this->MSSV = MSSV;
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->hocLuc = hocLuc;
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

string SinhVien::getAddress()
{
	return this->address;
}

string SinhVien::getPhone()
{
	return this->phone;
}

char SinhVien::getHocLuc()
{
	return this->hocLuc;
}

void SinhVien::XuatSV()
{
    cout << "Ten: " << name << endl;
    cout << "MSSV: " << MSSV << endl;
    cout << "Dia chi: " << address << endl;
    cout << "STD: " << phone << endl;
    cout << "Hoc luc: ";
    switch (hocLuc)
    {
    case 'X':
    {
        cout << "Xuat Sac";
        break;
    }
    case 'G':
    {
        cout << "Gioi";
        break;
    }
    case 'K':
    {
        cout << "Kha";
        break;
    }
    case 'T':
    {
        cout << "Trung Binh";
        break;
    }
    case 'Y':
    {
        cout << "Yeu";
        break;
    }
    }
}

void SinhVien::setMSSV(int mssv)
{
	this->MSSV = MSSV;
}

void SinhVien::setName(string name)
{
	this->name = name;
}

void SinhVien::setAddress(string address)
{
	this->address = address;
}

void SinhVien::setPhone(string phone)
{
	this->phone = phone;
}

void SinhVien::setHocLuc(char hocLuc)
{
	this->hocLuc = hocLuc;
}

