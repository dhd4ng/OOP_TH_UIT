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

void Diem::setxy(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Diem::Nhap()
{
	cout << "Nhap hoanh do: "; cin >> this->x;
	cout << "Nhap tung do: "; cin >> this->y;
}

void Diem::Xuat()
{
	cout << "(" << this->x << ";" << this->y << ")" << endl;
}

void Diem::TinhTien()
{
	int dx, dy;
	cout << "Nhap toa do vecto tinh tien (dx, dy): " << endl;
	cout << "dx: "; cin >> dx;
	cout << "dy: "; cin >> dy;
	this->x += dx;
	this->y += dy;
}

Diem::~Diem()
{
}
