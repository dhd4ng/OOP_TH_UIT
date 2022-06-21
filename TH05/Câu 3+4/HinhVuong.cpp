#include "HinhVuong.h"

HinhVuong::HinhVuong()
{
	n = 4;
}

HinhVuong::~HinhVuong()
{
}

void HinhVuong::Nhap()
{
	cout << "Nhap thong tin hinh vuong" << endl;
	DaGiac::Nhap();
}

void HinhVuong::Xuat()
{
	cout << "Hinh vuong" << endl;
	DaGiac::Xuat();
}

void HinhVuong::TinhTien()
{
	DaGiac::TinhTien();
}
