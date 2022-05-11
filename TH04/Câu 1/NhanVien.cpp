#include "NhanVien.h"

NhanVien::NhanVien()
{
	this->ten = '\0';
	this->ngaysinh = '\0';
	this->luong = '\0';
}

NhanVien::NhanVien(string ten, string ngaysinh, int luong)
{
	this->ten = ten;
	this->ngaysinh = ngaysinh;
	this->luong = luong;
}

string NhanVien::getTen()
{
	return this->ten;
}

void NhanVien::setTen(string ten)
{
	this->ten = ten;
}

string NhanVien::getNgaySinh()
{
	return this->ngaysinh;
}

void NhanVien::setNgaySinh(string ngaysinh)
{
	this->ngaysinh = ngaysinh;
}

int NhanVien::getLuong()
{
	return 0;
}

void NhanVien::setLuong(int luong)
{
	this->luong = luong;
}

void NhanVien::getInfo()
{
}

NhanVien::~NhanVien()
{
}
