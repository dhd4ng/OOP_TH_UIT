#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b;
	cout << "So phuc a : \n"; a.Nhap();  a.GiaTri();
	cout << "So phuc b : \n"; b.Nhap();  b.GiaTri();
	cout << "Cong hai so phuc: ";
	SoPhuc cong = a.Cong(b);
	cong.Xuat();
	cout << endl;
	cout << "Tru hai so phuc: ";
	SoPhuc tru = a.Tru(b);
	tru.Xuat();
	cout << endl;
	cout << "Nhan hai so phuc: ";
	SoPhuc nhan = a.Nhan(b);
	nhan.Xuat();
	cout << endl;
	cout << "Chia hai so phuc: ";
	SoPhuc chia = a.Chia(b);
	chia.Xuat();
	cout << endl;
    return 0;

}