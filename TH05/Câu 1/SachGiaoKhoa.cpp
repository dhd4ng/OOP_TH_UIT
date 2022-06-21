#include "SachGiaoKhoa.h"

SachGiaoKhoa::SachGiaoKhoa()
{
}

string SachGiaoKhoa::getMonHoc()
{
	return monHoc;
}

void SachGiaoKhoa::setMonHoc(string monHoc)
{
	this->monHoc = monHoc;
}

void SachGiaoKhoa::getInfo()
{
	cout << "Nhap thong tin sach giao khoa: " << endl;
	cin.ignore();
	cout << "Nhap ten sach: "; getline(cin, ten);
	cout << "Nhap mon hoc: "; getline(cin, monHoc);
	cout << "Nhap so trang: "; cin >> soTrang;
}

void SachGiaoKhoa::display()
{
	cout << "\nSach giao khoa: " << endl;
	cout << "Ten sach: " << ten << endl;
	cout << "So trang: " << soTrang << endl;
	cout << "Mon hoc: " << monHoc << endl;
}

SachGiaoKhoa::~SachGiaoKhoa()
{
}
