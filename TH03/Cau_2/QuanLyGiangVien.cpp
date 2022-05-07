#include "QuanLyGiangVien.h"

QuanLyGiangVien::QuanLyGiangVien()
{
}

QuanLyGiangVien::~QuanLyGiangVien()
{
	delete[] list;
}

void QuanLyGiangVien::NhapGV()
{
	int soLuong;
	cout << "Nhap so luong giang vien: "; cin >> soLuong;
	list = new GiangVien[soLuong];

	int msgv;
	string name;
	string major;

	for (int i = 0; i < soLuong; i++)
	{
		cout << "Nhap thong tin giang vien thu " << i + 1 << endl;
		cout << "Nhap ma so giang vien: "; cin >> msgv;
		cin.ignore();
		cout << "Nhap ten giang vien: "; getline(cin, name);
		cout << "Nhap chuyen nganh: "; getline(cin, major);

		GiangVien gv(msgv, name, major);
		list[i] = gv;
	}
}


