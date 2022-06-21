#include "TamGiac.h"

TamGiac::TamGiac()
{
	n = 3;
}

TamGiac::~TamGiac()
{
}

void TamGiac::Nhap()
{
	cout << "Nhap thong tin tam giac" << endl;
	DaGiac::Nhap();
}

void TamGiac::Xuat()
{
	cout << "Tam giac" << endl;
	DaGiac::Xuat();
}

void TamGiac::TinhTien()
{
	DaGiac::TinhTien();
}

