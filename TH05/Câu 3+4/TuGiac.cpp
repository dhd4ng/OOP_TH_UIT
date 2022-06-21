#include "TuGiac.h"

TuGiac::TuGiac()
{
	n = 4;
}

TuGiac::~TuGiac()
{
}

void TuGiac::Nhap()
{
	cout << "Nhap thong tin tu giac" << endl;
	DaGiac::Nhap();
}

void TuGiac::Xuat()
{
	cout << "Tu giac" << endl;
	DaGiac::Xuat();
}

void TuGiac::TinhTien()
{
	DaGiac::TinhTien();
}

