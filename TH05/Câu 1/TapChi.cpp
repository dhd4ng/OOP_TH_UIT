#include "TapChi.h"

TapChi::TapChi()
{
}

string TapChi::getTheLoai()
{
	return theLoai;
}

void TapChi::setTheLoai(string theLoai)
{
	this->theLoai = theLoai;
}

void TapChi::getInfo()
{
	cout << "Nhap thong tin tap chi: " << endl;
	cin.ignore();
	cout << "Nhap ten sach: "; getline(cin, ten);
	cout << "Nhap the loai: "; getline(cin, theLoai);
	cout << "Nhap so trang: "; cin >> soTrang;
}

void TapChi::display()
{
	cout << "\nTap chi: " << endl;
	cout << "Ten sach: " << ten << endl;
	cout << "So trang: " << soTrang << endl;
	cout << "The loai: " << theLoai << endl;
}

TapChi::~TapChi()
{
}
