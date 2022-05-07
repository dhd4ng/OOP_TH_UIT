#include "TestCandidate.h"

TestCandidate::TestCandidate()
{
	phongThi = new ThiSinh();
}

TestCandidate::~TestCandidate()
{
	delete [] phongThi;
}

void TestCandidate::nhapThiSinh()
{
	int soLuong;
	cout << "Nhap so luong thi sinh: " << endl;
	cin >> soLuong;
	this->soLuong = soLuong;

	phongThi = new ThiSinh[soLuong];
	int id;
	string ten;
	string SN;
	float dt, dv, da;
	for (int i = 0; i < soLuong; i++) {
		cout << "Nhap MSSV: " << endl;
		cin >> id;
		cout << "Nhap ten: " << endl;
		cin >> ten;
		cout << "Nhap ngay sinh: " << endl;
		cin >> SN;
		cout << "Nhap diem Toan: " << endl;
		cin >> dt;
		cout << "Nhap diem Van: " << endl;
		cin >> dv;
		cout << "Nhap diem Anh: " << endl;
		cin >> da;

		ThiSinh thiSinh(id, ten, SN, dt, dv, da);
		phongThi[i] = thiSinh;
	}
	
}

void TestCandidate::inThiSinhtongdiemLH15()
{
	cout << "Thi sinh co tong diem lon hon 15 la: " << endl;
	for (int i = 0; i < soLuong; i++) {
		float dt = phongThi[i].getDT();
		float dv = phongThi[i].getDV();
		float da = phongThi[i].getDA();
		if ((dt + da + dv) > 15) {
			cout << endl << "Sinh vien " << i+1 << endl;
			cout << "MSSV: " << phongThi[i].getId() << endl;
			cout << "Ten: " << phongThi[i].getName() << endl;
			cout << "Ngay thang nam sinh: " << phongThi[i].getDoB() << endl;
			cout << "Diem Toan: " << phongThi[i].getDT() << endl;
			cout << "Diem Van: " << phongThi[i].getDV() << endl;
			cout << "Diem Anh: " << phongThi[i].getDA() << endl;
		}
	}
}
