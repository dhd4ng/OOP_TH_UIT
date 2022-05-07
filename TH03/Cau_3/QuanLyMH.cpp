#include "QuanLyMH.h"

QuanLyMH::QuanLyMH()
{
}

QuanLyMH::~QuanLyMH()
{
	delete[] listMonHoc;
	delete[] listSinhVien;
	delete[] listGiangVien;
}

void QuanLyMH::nhapMon()
{
	int SoMH;
	cout << "Nhap so mon hoc: "; cin >> SoMH;
	this->SoMonHoc = SoMH;
	listMonHoc = new MonHoc[SoMH];
	listGiangVien = new GiangVien[SoMH];

	int SoSV;
	string tenMH;
	string tenGV;
	string chnganh;
	string maMH;
	int maGV;

	for (int i = 0; i < SoMH; i++) {
		cout << "Nhap thong tin mon hoc thu: " << i + 1 << endl;
		fflush(stdin);
		cout << "Nhap ten mon hoc: ";
		cin >> tenMH;

		fflush(stdin);
		cout << "Nhap ma mon hoc: ";
		cin >> maMH;

		fflush(stdin);
		cout << "Nhap ten giang vien: ";
		cin >> tenGV;

		fflush(stdin);
		cout << "Nhap ma so giang vien: "; cin >> maGV; 

		fflush(stdin);
		cout << "Nhap chuyen nganh: ";
		cin >> chnganh;

		GiangVien gv(maGV, tenGV, chnganh);
		listGiangVien[i] = gv;

		cout << "Nhap so luong sinh vien: ";
		cin >> SoSV;
		this->soSinhVien = SoSV;
		listSinhVien = new SinhVien[SoSV];
		string name;
		int diem;
		int mssv;

		for (int j = 0; j < SoSV; j++) {
			cout << "Nhap thong tin sinh vien thu: " << j + 1 << endl;
			cout << "Nhap ho ten sinh vien: ";
			cin >> name;

			fflush(stdin);
			cout << "Nhap ma so sinh vien: "; cin >> mssv; 

			fflush(stdin);
			cout << "Nhap diem trung binh sinh vien: "; cin >> diem;
			fflush(stdin);

			SinhVien sv(mssv, name, diem);
			listSinhVien[j] = sv;
		}

		MonHoc mh(tenMH, maMH, listSinhVien);
		listMonHoc[i] = mh;
	}
}
