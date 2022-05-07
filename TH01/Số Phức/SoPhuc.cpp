#include <iostream>
#include "SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc()
{
	this->thuc = 0;
	this->ao = 0;
}

SoPhuc::SoPhuc(double thuc, double ao)
{
	this->thuc = thuc;
	this->ao = ao;
}

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc: ";
	cin >> this->thuc;
	cout << "Nhap phan ao: ";
	cin >> this->ao;
}

void SoPhuc::Xuat()
{
	if (this->thuc != 0) {
		if (this->ao > 0) {
			if (this->ao == 1) { cout << this->thuc << "+" << "i" << endl; }
			else { cout << this->thuc << "+" << this->ao << "i" << endl; }
		}
		else if (this->ao == 0) {
			cout << this->thuc << endl;
		}
		else {
			if (this->ao == -1) { cout << this->thuc << "-" << "i" << endl; }
			else { cout << this->thuc << this->ao << "i" << endl; }
		}
	}
	else {
		 cout << this->ao << "i" << endl; 
	}
}

void SoPhuc::GiaTri()
{
	if (this->thuc != 0) {
		if (this->ao > 0) {
			if (this->ao == 1) { cout << this->thuc << "+" << "i" << endl; }
			else { cout << this->thuc << "+" << this->ao << "i" << endl; }
		}
		else if (this->ao == 0) {
			cout << this->thuc << endl;
		}
		else {
			if (this->ao == -1) { cout << this->thuc << "-" << "i" << endl; }
			else { cout << this->thuc << this->ao << "i" << endl; }
		}
	}
	else {		
		cout << this->ao << "i" << endl; 
	}
}

double SoPhuc::getPhanThuc()
{
	return thuc;
}

double SoPhuc::getPhanAo()
{
	return ao;
}

void SoPhuc::setPhanThuc(double thuc)
{
	this->thuc = thuc;
}
void SoPhuc::setPhanAo(double ao) {
	this->ao = ao;
}

SoPhuc SoPhuc::Cong(SoPhuc b)
{
	SoPhuc c;
	c.thuc = this->thuc + b.thuc;
	c.ao = this->ao + b.ao;
	return c;
}

SoPhuc SoPhuc::Tru(SoPhuc b)
{
	SoPhuc c;
	c.thuc = this->thuc - b.thuc;
	c.ao = this->ao - b.ao;
	return c;
}

SoPhuc SoPhuc::Nhan(SoPhuc b)
{
	SoPhuc c;
	c.thuc = this->thuc * b.thuc - this->ao * b.ao;
	c.ao = this->thuc * b.ao + this->ao * b.thuc;
	return c;
}

SoPhuc SoPhuc::Chia(SoPhuc b)
{
	SoPhuc c;
	c.thuc = (this->thuc * b.thuc + this->ao * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
	c.ao = (this->ao * b.thuc- this->thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
	return c;
}

SoPhuc::~SoPhuc()
{

}
