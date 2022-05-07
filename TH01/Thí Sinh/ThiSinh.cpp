#include "ThiSinh.h"

ThiSinh::ThiSinh()
{
	id = 1;
	Name = "Nguyen Van A";
	DateofBirth = "1/1/2003";
	diemAnh = diemToan = diemVan = 10;
}

ThiSinh::ThiSinh(int id, string Name, string DateofBirth, float diemToan, float diemVan, float diemAnh)
{
	this->id = id;
	this->Name = Name;
	this->DateofBirth = DateofBirth;
	this->diemToan = diemToan;
	this->diemVan = diemVan;
	this->diemAnh = diemAnh;
}

ThiSinh::~ThiSinh()
{
}

int ThiSinh::getId()
{
	return id;
}

string ThiSinh::getName()
{
	return Name;
}

string ThiSinh::getDoB()
{
	return DateofBirth;
}

float ThiSinh::getDT()
{
	return diemToan;
}

float ThiSinh::getDV()
{
	return diemVan;
}

float ThiSinh::getDA()
{
	return diemAnh;
}

void ThiSinh::setId()
{
	this->id = id;
}

void ThiSinh::setName()
{
	this->Name = Name;
}

void ThiSinh::setDoB()
{
	this->DateofBirth = DateofBirth;
}

void ThiSinh::setDT()
{
	this->diemToan = diemToan;
}

void ThiSinh::setDV()
{
	this->diemVan = diemVan;
}

void ThiSinh::setDA()
{
	this->diemAnh = diemAnh;
}
