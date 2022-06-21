#include "HinhChuNhat.h"

HinhChuNhat::HinhChuNhat()
{
	n = 4;
}

HinhChuNhat::~HinhChuNhat()
{
}

void HinhChuNhat::Nhap()
{
	cout << "Nhap thong tin hinh chu nhat" << endl;
	DaGiac::Nhap();
}

void HinhChuNhat::Xuat()
{
	cout << "Hinh chu nhat" << endl;
	DaGiac::Xuat();
}

void HinhChuNhat::TinhTien()
{
	DaGiac::TinhTien();
}

