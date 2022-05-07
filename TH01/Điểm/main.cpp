#include <iostream>
#include "Diem.h"
using namespace std;

int main() {
	Diem A;
	cout << "Nhap diem A: " << endl; A.Nhap();
	cout << "Hoanh do diem A: " << A.getx() << endl;
	cout << "Tung do diem A: " << A.gety() << endl;
	cout << "Thay doi hoanh do diem A: " << endl; 
	A.setx(3);
	cout << "Hoanh do diem A: " << A.getx() << endl;
	cout << "Tung do diem A: " << A.gety() << endl;
	A.TinhTien();
	cout << "Diem A sau khi tinh tien: "; A.Xuat();
}