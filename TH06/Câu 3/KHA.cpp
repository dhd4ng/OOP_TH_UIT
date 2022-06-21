#include "KHA.h"

KHA::KHA()
{
}

KHA::~KHA()
{
}

double KHA::TinhTien()
{
	double temp;
	temp = getdonGia() * getSL() * (1 + 0.1);
	setTien(temp);
	return temp;
}
