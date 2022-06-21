#include "Bo.h"

Bo::Bo()
{
}

float Bo::ChoSua()
{
	return rand() % 20;
}

int Bo::SinhCon()
{
	return 0 + rand() % 2;
}

void Bo::Keu()
{
	cout << "Um bo" << " ";
}

Bo::~Bo()
{
}
