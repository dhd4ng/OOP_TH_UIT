#include "KHB.h"

KHB::KHB()
{
}

KHB::~KHB()
{
}

double KHB::TinhTien()
{
	setKM();
	double temp;
	temp = (getSL() * getdonGia()) * (1 - getKM()) * (1 + 0.1);
	setTien(temp);
	return temp;
}

int KHB::getNam()
{
	return nam;
}

void KHB::setNam(int nam)
{
	this->nam = nam;
}

double KHB::getKM()
{
	return khuyenMai;
}

void KHB::setKM()
{
	khuyenMai = getNam() * 5 / 100;
	if (khuyenMai > 0.5)
	{
		khuyenMai = 0.5;
	}
}

istream& KHB::operator>>(istream& is)
{
	KH::operator>>(is);
	int nam;
	cin >> nam;
	setNam(nam);
	TinhTien();
	return is;
}
