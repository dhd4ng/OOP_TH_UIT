#include "DaGiac.h"
#include "Diem.h"
#include "TamGiac.h"
#include "TuGiac.h"

int main() {
	int temp;
	cout << "Nhap so dinh: "; cin >> temp;
	DaGiac* a = NULL;
	switch (temp)
	{
	case 3: {
		a = new TamGiac;
		break;
	}
	case 4: {
		a = new TuGiac;
		break;
	}
	default:
		break;
	}
	a->Nhap();
	a->Xuat();
	a->TinhTien();
	a->Xuat();

}