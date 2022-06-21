#pragma once
#include <iostream>
#include <string>
using namespace std;
class KH
{
protected:
	string ten;
	double tienTra;
	int soLuongHang;
	double donGia;
public:
	KH();
	KH(string _ten, double tien, int sl, double gia);
	~KH();

	void setTen(string ten);
	void setTien(double tien);
	void setSL(int soluong);
	void setdonGia(double dg);

	string getTen();
	double getTien();
	int getSL();
	double getdonGia();

	virtual double TinhTien() = 0;

	ostream& operator<<(ostream& os);
	virtual istream& operator >>(istream& is);
};

