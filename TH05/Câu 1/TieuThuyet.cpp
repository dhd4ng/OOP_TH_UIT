#include "TieuThuyet.h"

TieuThuyet::TieuThuyet()
{
}

string TieuThuyet::getTheLoai()
{
	return theLoai;
}

void TieuThuyet::setTheLoai(string theLoai)
{
	this->theLoai = theLoai;
}

void TieuThuyet::getInfo()
{
	cout << "Nhap thong tin tieu thuyet: " << endl;
	cin.ignore();
	cout << "Nhap ten sach: "; getline(cin, ten);
	cout << "Nhap the loai: "; getline(cin, theLoai);
	cout << "Nhap so trang: "; cin >> soTrang;
}

void TieuThuyet::display()
{
	cout << "\nTieu thuyet: " << endl;
	cout << "Ten sach: " << ten << endl;
	cout << "So trang: " << soTrang << endl;
	cout << "The loai: " << theLoai << endl;
}

TieuThuyet::~TieuThuyet()
{
}
