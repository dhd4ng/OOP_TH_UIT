#pragma once
class PhanSo {
private:
	int tu;
	int mau;
public:
	PhanSo();
	PhanSo(int tu, int mau);
	
	//getter
	int getTuSo();
	int getMauSo();

	//setter
	void setTuSo(int tu, int mau);
	void setMauSo(int tu, int mau);

	PhanSo Cong(PhanSo B);
	PhanSo Tru(PhanSo B);
	PhanSo Nhan(PhanSo B);
	PhanSo Chia(PhanSo B);

	void Nhap();
	void Xuat();
	float GiaTri();

	~PhanSo(); 

};