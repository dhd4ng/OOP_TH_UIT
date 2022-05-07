#include "TamGiac.h"
#include <iostream>
using namespace std;
TamGiac::TamGiac()
{
	A.Setxy(0, 0);
	B.Setxy(0, -1);
	C.Setxy(-1, 0);
}

TamGiac::TamGiac(Diem A, Diem B, Diem C)
{
	this->A = A;
	this->B = B;
	this->C = C;
}

TamGiac::~TamGiac()
{
}

void TamGiac::nhap()
{
	int kt;
	do {
		kt = 0;
		cout << "Nhap dinh A" << endl;
		A.Nhap();
		cout << "Nhap dinh B" << endl;
		B.Nhap();
		cout << "Nhap dinh C" << endl;
		C.Nhap();
		Diem D, E;
		D = A.vector(B);
		E = A.vector(C);
		if (float(D.getx() * E.gety()) == float(D.gety() * E.getx()))
		{
			kt = 1;
			cout << "\nTam giac khong ton tai! nhap lai!";
		}
		cout << "\n";
	} while (kt);
}

void TamGiac::xuat()
{
	cout << "Tam giac tao boi 3 diem: " << endl;
	A.Xuat(); cout << ", "; B.Xuat(); cout << ", "; C.Xuat(); cout << endl;
}

void TamGiac::tinhTien(float m, float n)
{
	A.TinhTien(m,n);
	B.TinhTien(m,n);
	C.TinhTien(m,n);
}

void TamGiac::quay(float rad)
{
	A.Quay(rad);
	B.Quay(rad);
	C.Quay(rad);
}

void TamGiac::thuPhong(float k)
{
	A.Setxy(A.getx() * k, A.gety() * k);
	B.Setxy(B.getx() * k, B.gety() * k);
	C.Setxy(C.getx() * k, C.gety() * k);
}
