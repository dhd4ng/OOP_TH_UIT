#pragma once
#include "NhanVien.h"
class NhanVienSanXuat : public NhanVien
{
private:
	int luongCanBan;
	int soSanPham;
public:
	NhanVienSanXuat();
	NhanVienSanXuat(string ten, string ngaysinh, int luongCanBan, int soSanPham);

	int getLuong();
	void setLuong(int luongCanBan, int soSanPham);
	void getInfo();

	~NhanVienSanXuat();
};

