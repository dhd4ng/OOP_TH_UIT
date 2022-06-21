#pragma once
#include "KH.h"
class KHB : public KH
{
private:
	int nam;
	double khuyenMai;
public:
	KHB();
	~KHB();

	double TinhTien();
	int getNam();
	void setNam(int nam);
	double getKM();
	void setKM();

	istream& operator>>(istream& is);
};

