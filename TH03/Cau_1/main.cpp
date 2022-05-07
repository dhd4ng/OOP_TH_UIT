#include "QuanLySV.h"

int main() {
	QuanLySV test;
	test.NhapSV();
	test.SoSanhHL();
	cout << endl;

	cout << "Tong so sinh vien: " << SinhVien::soSV;
}