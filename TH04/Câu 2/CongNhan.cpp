#include "CongNhan.h"

CongNhan::CongNhan()
{
}

CongNhan::CongNhan(string ten, string ngaySinh, string congTy) : Nguoi(ten, ngaySinh)
{
	this->congTy = congTy;
}

void CongNhan::setCongTy(string cty)
{
	this->congTy = cty;
}

string CongNhan::getCongTy()
{
	return congTy;
}

void CongNhan::getInfo()
{
	cout << "Nhap thong tin cong nhan" << endl;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaySinh);
	cout << "Nhap ten cong ty: "; getline(cin, congTy);
}

void CongNhan::display()
{
	cout << "Cong nhan: " << ten << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Cong ty: " << congTy << endl;
}

CongNhan::~CongNhan()
{
}
