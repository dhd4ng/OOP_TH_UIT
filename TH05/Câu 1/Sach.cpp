#include "Sach.h"

Sach::Sach()
{
	this->soTrang = 0;
	this->ten = '\0';
}

int Sach::getSoTrang()
{
	return soTrang;
}

void Sach::setSoTrang(int soTrang)
{
	this->soTrang = soTrang;
}

string Sach::getTen()
{
	return ten;
}

void Sach::setTen(string ten)
{
	this->ten = ten;
}

Sach::~Sach()
{
}
