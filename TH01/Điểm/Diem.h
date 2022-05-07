#pragma once
class Diem {
private:
	int x;
	int y;
public:
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
	void quay(float);
	~Diem();
};

