#include "CaSi.h"
#include "CongNhan.h"
#include "HocSinh.h"
#include "NgheSi.h"
#include "SinhVien.h"

int main() {
	int temp;
	cout << "1. Nhap thong tin hoc sinh" << endl;
	cout << "2. Nhap thong tin sinh vien" << endl;
	cout << "3. Nhap thong tin cong nhan" << endl;
	cout << "4. Nhap thong tin ca si" << endl;
	cout << "5. Nhap thong tin nghe si" << endl;
	cin >> temp;
	switch (temp) {
	case 1: {
		HocSinh a;
		a.getInfo();
		a.display();
		break;
	}
	case 2: {
		SinhVien a;
		a.getInfo();
		a.display();
		break;
	}
	case 3: {
		CongNhan a;
		a.getInfo();
		a.display();
		break;
	}
	case 4: {
		CaSi a;
		a.getInfo();
		a.display();
		break;
	}
	case 5: {
		NgheSi a;
		a.getInfo();
		a.display();
		break;
	}
	default: break;
	}
}