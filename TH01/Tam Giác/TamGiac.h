#pragma once
#include <iostream>
#include "Diem.h"
using namespace std;
class TamGiac
{
private:
	Diem A;
	Diem B;
	Diem C;
public:
	TamGiac();
	TamGiac(Diem A, Diem B, Diem C);
	~TamGiac();

	void nhap();
	void xuat();
	void tinhTien(float, float);
	void quay(float);
	void thuPhong(float k);

};

