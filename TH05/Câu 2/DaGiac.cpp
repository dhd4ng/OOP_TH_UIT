#include "DaGiac.h"

DaGiac::DaGiac()
{
}

DaGiac::~DaGiac()
{
	delete[] d;
}

void DaGiac::Nhap()
{
	d = new Diem[n];
	for (int i = 0; i < n; i++)
		d[i].Nhap();
}

void DaGiac::Xuat()
{
	for (int i = 0; i < n; i++) {
		cout << "Dinh " << i + 1; d[i].Xuat();
	}
}

void DaGiac::TinhTien()
{
	for (int i = 0; i < n; i++)
		d[i].TinhTien();
}
