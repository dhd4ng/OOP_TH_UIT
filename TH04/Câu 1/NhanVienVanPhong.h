#pragma once
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
private:
	int soNgayLamViec;
public:
	NhanVienVanPhong();
	NhanVienVanPhong(string ten, string ngaysinh, int luong, int soNgayLamViec);

	int getLuong();
	void setLuong(int soNgayLamViec);
	void getInfo();

	~NhanVienVanPhong();
};

