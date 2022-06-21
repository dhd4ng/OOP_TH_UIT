#include "KH.h"

KH::KH()
{
	ten = " ";
	tienTra = 0;
	donGia = 0;
}

KH::KH(string _ten, double tien, int sl, double gia)
{
	this->ten = _ten;
	this->tienTra = tien;
	this->soLuongHang = sl;
	this->donGia = gia;
}

KH::~KH()
{
}

void KH::setTen(string ten)
{
	this->ten = ten;
}

void KH::setTien(double tien)
{
	this->tienTra = tien;
}

void KH::setSL(int soluong)
{
	this->soLuongHang = soluong;
}

void KH::setdonGia(double dg)
{
	this->donGia = dg;
}

string KH::getTen()
{
	return ten;
}

double KH::getTien()
{
	return tienTra;
}

int KH::getSL()
{
	return soLuongHang;
}

double KH::getdonGia()
{
	return donGia;
}

ostream& KH::operator<<(ostream& os)
{
	os << "Ten: " << getTen() << endl;
	os << "Tien phai tra: " << getTien() << endl;
	return os;
}

istream& KH::operator>>(istream& is)
{
	string name;
	is.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(is, name);
	setTen(name);
	int num;
	is >> num;
	setSL(num);
	double price;
	is >> price;
	setdonGia(price);
	this->TinhTien();
	return is;
}
