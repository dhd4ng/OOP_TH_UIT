#include <iostream>
#include "TamGiac.h"
using namespace std;

int main() {
	TamGiac A;
	float x, y, rad, k;
	A.nhap(); A.xuat();

	cout << "Tinh tien theo vector v(x,y):" << endl;
	cout <<"x = "; cin >> x;
	cout << "y= "; cin >> y;
	A.tinhTien(x, y); A.xuat();

	cout << "Nhap goc quay rad = "; cin >> rad;
	A.quay(rad); A.xuat();

	cout << "Nhap he so thu phong k = "; cin >> k;
	A.thuPhong(k); A.xuat();

	return 0;
}