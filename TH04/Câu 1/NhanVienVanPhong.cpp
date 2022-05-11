#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong()
{
	NhanVien::NhanVien();
	this->soNgayLamViec = '\0';
}

NhanVienVanPhong::NhanVienVanPhong(string ten, string ngaysinh, int luong, int soNgayLamViec) : NhanVien(ten, ngaysinh, luong)
{
	this->soNgayLamViec = soNgayLamViec;
}

int NhanVienVanPhong::getLuong()
{
	return soNgayLamViec * 100000;
}

void NhanVienVanPhong::setLuong(int songaylamviec)
{
	this->soNgayLamViec = songaylamviec;
}

void NhanVienVanPhong::getInfo()
{
	cin.ignore();
	cout << "Nhap thong tin nhan vien van phong" << endl;
	cout << "Nhap ho ten: "; getline(cin, ten);
	cout << "Nhap ngay sinh: "; getline(cin, ngaysinh);
	cout << "Nhap so ngay lam viec: "; cin >> soNgayLamViec;
}

NhanVienVanPhong::~NhanVienVanPhong()
{
}
