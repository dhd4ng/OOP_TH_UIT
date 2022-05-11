#include "NgheSi.h"

NgheSi::NgheSi()
{
}

NgheSi::NgheSi(string ten, string ngaySinh, string ngheDanh) : Nguoi(ten, ngaySinh)
{
	this->ngheDanh = ngheDanh;
}

void NgheSi::setNgheDanh(string ngheDanh)
{
	this->ngheDanh = ngheDanh;
}

string NgheSi::getNgheDanh()
{
	return ngheDanh;
}

void NgheSi::getInfo()
{
	cout << "Nhap thong tin nghe si" << endl;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaySinh);
	cout << "Nhap nghe danh: "; getline(cin, ngheDanh);
}

void NgheSi::display()
{
	cout << "Nghe si: " << ten << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Nghe danh: " << ngheDanh << endl;
}

NgheSi::~NgheSi()
{
}
