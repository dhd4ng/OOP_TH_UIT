#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat() 
{
	NhanVien::NhanVien();
	this->soSanPham = '\0';
	this->luongCanBan = '\0';
}

NhanVienSanXuat::NhanVienSanXuat(string ten, string ngaysinh, int luongCanBan, int soSanPham)
{
	this->ten = ten;
	this->ngaysinh = ngaysinh;
	this->luongCanBan = luongCanBan;
	this->soSanPham = soSanPham;
}

int NhanVienSanXuat::getLuong()
{
	return luongCanBan + soSanPham * 5000;
}

void NhanVienSanXuat::setLuong(int luongCanBan, int soSanPham)
{
	this->luongCanBan = luongCanBan;
	this->soSanPham = soSanPham;
}

void NhanVienSanXuat::getInfo()
{
	cout << "Nhap thong tin nhan vien san xuat" << endl;
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaysinh);
	cout << "Nhap luong can ban: "; cin >> luongCanBan;
	cout << "Nhap so san pham: "; cin >> soSanPham;
}

NhanVienSanXuat::~NhanVienSanXuat()
{
}
