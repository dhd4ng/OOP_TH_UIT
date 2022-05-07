#include <iostream>
#include "PhanSo.h"
using namespace std;

int main() {
	PhanSo A, B;
	cout << "Nhap vao hai phan so: " << endl;
	A.Nhap();
	B.Nhap();
	cout << "Cong hai phan so: " ;
	PhanSo cong = A.Cong(B);
	cong.Xuat();
	cout << endl;
	cout << "Tru hai phan so: ";
	PhanSo tru = A.Tru(B);
	tru.Xuat();
	cout << endl;
	cout << "Nhan hai phan so: ";
	PhanSo nhan = A.Nhan(B);
	nhan.Xuat();
	cout << endl;
	cout << "Chia hai phan so: ";
	PhanSo chia = A.Chia(B);
	chia.Xuat();
	cout << endl;
	cout << "Gia tri cua phan so A: "<<	A.GiaTri();
	return 0;
}