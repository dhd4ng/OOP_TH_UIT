#pragma once
#include "GiangVien.h"
#include "MonHoc.h"
#include <string>
using namespace std;
class QuanLyMH
{
private:
	int soSinhVien;
	int SoMonHoc;
	SinhVien* listSinhVien;
	GiangVien* listGiangVien;
	MonHoc* listMonHoc;
public:
	QuanLyMH();
	~QuanLyMH();

	void nhapMon();
};

