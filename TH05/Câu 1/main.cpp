#include "Sach.h"
#include "SachGiaoKhoa.h"
#include "TapChi.h"
#include "TieuThuyet.h"
#include <vector>
int main() {
	int temp;
	cout << "Nhap tong so sach: "; cin >> temp;
	vector<Sach*> list;
	list.resize(temp);

	int SGK;
	cout << "Nhap so sach giao khoa: "; cin >> SGK;
	for (int i = 0; i < SGK; i++)
		list[i] = new SachGiaoKhoa;

	int TC;
	cout << "Nhap so tap chi: "; cin >> TC;
	for (int i = SGK; i < SGK + TC; i++)
		list[i] = new TapChi;

	int TT;
	cout << "Nhap so tieu thuyet: "; cin >> TT;
	for (int i = SGK + TC; i < temp; i++)
		list[i] = new TieuThuyet;

	for (int i = 0; i < temp; i++)
		list[i]->getInfo();
	for (int i = 0; i < temp; i++)
		list[i]->display();

}