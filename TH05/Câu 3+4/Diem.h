#pragma once
class Diem {
protected:
	int x;
	int y;
public:
	friend class DaGiac;
	Diem();
	Diem(int x, int y);

	//getter
	int getx();
	int gety();

	//setter
	void setx(int x);
	void sety(int y);
	void setxy(int x, int y);

	void Nhap();
	void Xuat();
	void TinhTien();

	~Diem();
};

