#include "HocSinh.h"

HocSinh::HocSinh()
{
}

HocSinh::HocSinh(string ten, string ngaySinh, int MSHS) : Nguoi(ten, ngaySinh)
{
	this->MSHS = MSHS;
}

void HocSinh::setMSHS(int MSHS)
{
	this->MSHS = MSHS;
}

int HocSinh::getMSHS()
{
	return MSHS;
}

void HocSinh::getInfo()
{
	cout << "Nhap thong tin hoc sinh" << endl;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaySinh);
	cout << "Nhap ma so hoc sinh: "; cin >> MSHS;
}

void HocSinh::display()
{
	cout << "Hoc sinh: " << ten << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Ma so hoc sinh: " << MSHS << endl;
}

HocSinh::~HocSinh()
{
}
