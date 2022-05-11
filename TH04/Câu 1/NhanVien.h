#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string ten;
	string ngaysinh;
	int luong;
public:
	NhanVien();
	NhanVien(string ten, string ngaysinh, int luong);

	string getTen();
	void setTen(string ten);
	string getNgaySinh();
	void setNgaySinh(string ngaysinh);
	int getLuong();
	void setLuong(int luong);
	void getInfo();

	~NhanVien();

};

