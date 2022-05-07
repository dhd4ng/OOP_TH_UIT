#include "Diem.h"
#include <iostream>
using namespace std;
Diem::Diem()
{
	this->x = 0;
	this->y = 0;
}

Diem::Diem(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Diem::getx()
{
	return x;
}

int Diem::gety()
{
	return y;
}

void Diem::setx(int x)
{
	this->x = x;
}

void Diem::sety(int y)
{
	this->y = y;
}

void Diem::Nhap()
{
	cout << "Nhap hoanh do: "; cin >> this->x;
	cout << "Nhap tung do: "; cin >> this->y;
}

void Diem::Xuat()
{
	cout << "(" << this->x << ";" << this->y << ")";
}

void Diem::TinhTien(float m, float n)
{
	this->x += m;
	this->y += n;
}

void Diem::Setxy(float a, float b)
{
	x = a;
	y = b;
}

void Diem::Quay(float rad)
{
	x = x * cos(rad) - y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}

Diem Diem::vector(Diem A)
{
	Diem temp;
	temp.setx(A.getx() - x);
	temp.sety(A.gety() - y);
	return temp;
}

Diem::~Diem()
{
}
