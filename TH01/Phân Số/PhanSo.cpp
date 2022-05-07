#include <iostream>
#include "PhanSo.h"
using namespace std;

PhanSo::PhanSo() {
	tu = 0;
	mau = 1;
}

PhanSo::PhanSo(int tu, int mau) {
	this->tu = tu;
	this->mau = mau;
}

int PhanSo::getTuSo()
{
	return tu;
}

int PhanSo::getMauSo()
{
	return mau;
}

void PhanSo::setTuSo(int tu, int mau)
{
	this->tu = tu;
}

void PhanSo::setMauSo(int tu, int mau)
{
	if (this->mau == 0) {
		this->mau = 1;
		return;
	}
	this->mau = mau;
}

int _gcd(int a, int b) {
	if (b == 0) return a;
	return _gcd(b, a % b);
}

PhanSo PhanSo::Cong(PhanSo b)
{
	PhanSo temp;
	temp.tu = this->tu * b.mau + b.tu * this->mau;
	temp.mau = this->mau * b.mau;
	return temp;
}

PhanSo PhanSo::Tru(PhanSo b)
{
	PhanSo temp;
	temp.tu = this->tu * b.mau - this->mau * b.tu;
	temp.mau = this->mau * b.mau;
	return temp;
}

PhanSo PhanSo::Nhan(PhanSo b)
{
	PhanSo temp;
	temp.tu = this->tu * b.mau;
	temp.mau = this->mau * b.mau;
	return temp;
}

PhanSo PhanSo::Chia(PhanSo b)
{
	PhanSo temp;
	temp.tu = this->tu * b.mau;
	temp.mau = this->mau * b.tu;
	return temp;
}

void PhanSo::Nhap()
{
	cout << "Nhap vao tu so: ";
	cin >> this->tu;
	cout << "Nhap vao mau so: ";
	cin >> this->mau;
}

void PhanSo::Xuat()
{
	int gcd = _gcd(this->tu, this->mau);
	if (this->tu == 0) cout << "0";
	if (this->mau == 0) cout << "Khong xac dinh";
	if (this->tu < 0 || this->mau < 0) {
		cout <<  "-" << abs(this->tu / gcd) << "/" << abs(this->mau / gcd);
	}
	if ((this->tu < 0 && this->mau < 0) || (this->tu > 0 && this->mau > 0)) {
		cout << abs(this->tu / gcd) << "/" << abs(this->mau / gcd);
	}
}

float PhanSo::GiaTri()
{
	return (float)tu / mau;
}

PhanSo::~PhanSo()
{
}
