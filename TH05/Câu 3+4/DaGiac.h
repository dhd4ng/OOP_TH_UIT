#pragma once
#include <iostream>
#include <string>
#include "Diem.h"
using namespace std;
class DaGiac 
{
protected:
	Diem* d;
	int n;
public:
	DaGiac();
	virtual ~DaGiac();

	virtual void Nhap();
	virtual void Xuat();
	virtual void TinhTien();

};

