#include "HinhBinhHanh.h"

HinhBinhHanh::HinhBinhHanh()
{
	n = 4;
	d = new Diem[4];
}

HinhBinhHanh::~HinhBinhHanh()
{
}

void HinhBinhHanh::Nhap()
{
	cout << "Nhap thong tin hinh binh hanh" << endl;
	DaGiac::Nhap();
}

void HinhBinhHanh::Xuat()
{
	cout << "Hinh binh hanh" << endl;
	DaGiac::Xuat();
}

void HinhBinhHanh::TinhTien()
{
	DaGiac::TinhTien();
}

