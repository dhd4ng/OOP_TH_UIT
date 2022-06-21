#include "KHC.h"

KHC::KHC()
{
}

KHC::~KHC()
{
}

double KHC::TinhTien()
{
	double temp;
	temp = getSL() * getdonGia() * 0.5 * (1 + 0.1);
	setTien(temp);
	return temp;
}
