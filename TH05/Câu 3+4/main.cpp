#include "DaGiac.h"
#include "Diem.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include "TamGiac.h"
#include "TuGiac.h"

int main() {
	DaGiac* a = NULL;
	int temp;
	cout << "Nhap so dinh: "; cin >> temp;
	switch (temp)
	{
	case 3: {
		a = new TamGiac;
		break;
	}
	case 4: {
		int loai;
		cout << "Hinh binh hanh(0) || Hinh chu nhat(1) || Hinh vuong(2) || Tu giac(3)" << endl;
		cin >> loai;
		switch (loai)
		{
		case 0: {
			a = new HinhBinhHanh;
			break;
		}
		case 1: {
			a = new HinhChuNhat;
			break;
		}
		case 2: {
			a = new HinhVuong;
			break;
		}
		case 3: {
			a = new TuGiac;
			break;
		}
		default:
			break;
		}
	}
	default:
		break;
	}
	a->Nhap();
	a->Xuat();
	a->TinhTien();
	a->Xuat();
}