#include "SinhVien.h"

SinhVien::SinhVien()
{
}

SinhVien::SinhVien(string ten, string ngaySinh, int MSSV) : Nguoi(ten, ngaySinh)
{
	this->MSSV = MSSV;
}

int SinhVien::getMSSV()
{
	return MSSV;
}

void SinhVien::setMSSV(int MSSV)
{
	this->MSSV = MSSV;
}

void SinhVien::getInfo()
{
	cout << "Nhap thong tin sinh vien" << endl;
	cin.ignore();
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaySinh);
	cout << "Nhap ma so sinh vien: "; cin >> MSSV;
}

void SinhVien::display()
{
	cout << "Sinh vien: " << ten << endl;
	cout << "Ngay sinh: " << ngaySinh << endl;
	cout << "Ma so sinh vien: " << MSSV << endl;
}

SinhVien::~SinhVien()
{
}
