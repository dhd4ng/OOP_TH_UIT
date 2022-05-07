#include "QuanLyDH.h"

QuanLyDH::QuanLyDH()
{
}

QuanLyDH::~QuanLyDH()
{
	delete[] listGiangVien;
	delete[] listMonHoc;
	delete[] listSinhVien;
}

void QuanLyDH::taoMon()
{
	int soGV, soSV, soMH;
	do {
		cout << "Nhap so luong giang vien: "; cin >> soGV;
		if (soGV <= 0) cout << "Khong du giang vien de tao mon hoc!" << endl;
	} while (soGV <= 0);

	do {
		cout << "Nhap so luong mon hoc: "; cin >> soMH;
		if (soMH <= 0) cout << "Khong du mon hoc!" << endl;
	} while (soMH <= 0);

	this->soGiangVien = soGV;
	this->soMonHoc = soMH;
	listGiangVien = new GiangVien[soGiangVien];
	listMonHoc = new MonHoc[soMonHoc];

	string tenMH;
	string maMH;
	string tenGV;
	string chnganh;
	int maGV;

	for (int i = 0; i < soMH; i++) {
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

		do {
			cout << "Nhap so luong sinh vien: "; cin >> soSV;
			if (soSV < 3) cout << "Khong du sinh vien de tao mon hoc!" << endl;
		} while (soSV < 3);


		this->soSinhVien = soSV;
		listSinhVien = new SinhVien[soSV];
		string name;
		int diem;
		int mssv;

		for (int j = 0; j < soSV; j++) {
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

void QuanLyDH::display()
{
	for (int i = 0; i < soMonHoc; i++) {
		cout << "Mon hoc: " << listMonHoc[i].getTenMon() << endl;
		cout << "Ten giang vien: " << listGiangVien[i].getName() << endl;
		cout << "So luong sinh vien: " << SinhVien::soSV << endl;
	}
}
